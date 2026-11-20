#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the array size";
    cin>>size;
    vector<int> array(size);
    cout<<"Enter the Array Elements one-by-one";
    for(int i=0;i<n;i++)
    cin>>array[i];

    vector<int> prefix;
    vector<int> suffix;

    //initialize prefix and suffix 

    prefix[0] =  array[0];
    suffix[0]= array[n-2];

    for(int i=1;i<n;i++)
    {
        prefix[i] = prefix[i-1] + array[i];
    }

    for(int i=n-2;i>=0;i--)
    {
        suffix[i] = suffix[i+1] + array[i];
    }

    for(int i=0;i<n;i++)
    {
        
    }

    
}

