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
    
    vector<int> suffix_product(n);
    suffix_product[n-1] = array[n-1];
    for(int i=n-2;i>=0;i--)
    {
        suffix_product[i]=suffix_product[i+1]*array[i];
    }

    cout<<"Suffix Product\n";
    for(int i=0;i<n;i++)
    {
        cout<<"\n"<<suffix_product[i];
    }

    vector<int> arrayEx(n);
    for(int i=0;i<n;i++)
    {
       // arrayEx[i]=prefix_product[i]*suffix_product[i];
       int left, right;
       if(i==0)
       left = 1;
       else 
       left = prefix_product[i-1];

       if(i==n-1)
       right = 1;
       else 
       right = suffix_product[i+1];

       arrayEx[i]=right*left;  //this is the formula
//changing this line

    }

    cout<<"Array Product Except Self";
    for(int i=0;i<n;i++)
    {
        cout<<"\n"<<arrayEx[i];
    }


}