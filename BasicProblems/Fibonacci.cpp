#include<iostream>
using namespace std;

int main()
{
    int n;
    int a=0;
    int b=1;
    int c;
    cout<<"Enter the number";
    cin>>n;
    int i=0;
    while(i<n)
    {
        cout<<"  "<<a;
        c=a+b;
        a=b;
        b=c;
        i++;
    }
}