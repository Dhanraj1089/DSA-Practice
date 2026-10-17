#include <iostream>
using namespace std;
int main()
{
    int num;
    int i;
    int sum=0;
    int digit=0;
    cout<<"Enter the number";
    cin>>num;
    while(num!=0)
    {
        digit = num%10;
        num=num/10;
        sum=sum+digit;
    }
    cout<<"The overall sum of num is"<<sum;
}