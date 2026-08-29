#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter a number";
    cin>>num;

    int reversed = 0;

    while(num!=0)
    {
        int digit = num%10;
        reversed = (reversed*10) + digit;
        num/=10;
    }

    cout<<"reversed number is"<<reversed;
}
