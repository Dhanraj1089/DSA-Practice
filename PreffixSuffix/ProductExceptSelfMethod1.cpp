#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the array size";
    cin>>size;
    vector<int> array(size);
    int n =  size;
    cout<<"Enter the Array Elements one-by-one";
    for(int i=0;i<n;i++)
    cin>>array[i];

    vector<int> prefix(n);
    vector<int> suffix(n);

    //initialize prefix and suffix 

    prefix[0] =  array[0];
    suffix[n-1]= array[n-1];

    for(int i=1;i<n;i++)
    {
        prefix[i] = prefix[i-1] * array[i];
    }

    for(int i=n-2;i>=0;i--)
    {
        suffix[i] = suffix[i+1] * array[i];
    }

    vector<int> arrayT(size);

    for(int i=0;i<n;i++)
    {
        int left,right;
        if(i==0)
        left = 1;
        else 
        left = prefix[i-1];
        if (i==n-1)
        right =1;
        else
        right = suffix[i+1];
        arrayT[i] =  left * right; 
    }

    cout<<"Array of Product Except Self";
    for(int i=0;i<n;i++ )
    {
        cout<<"\n"<<arrayT[i];
    }

    
}

