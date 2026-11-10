#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the array size\n";
    cin>>n;

    cout<<"Enter the array elements one-by-one";
    vector<int> array(n);
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    vector<int> prefix_product(n);
    prefix_product[0]=array[0];
    for(int i=1;i<n;i++)
    {
        prefix_product[i]=prefix_product[i-1] * array[i];
    }
    cout<<"prefix product\n";
    for(int i=0;i<n;i++)
    {
        cout<<"\n"<<prefix_product[i];
    }
    
}