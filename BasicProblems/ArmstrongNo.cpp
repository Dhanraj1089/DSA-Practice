#include<iostream>
using namespace std;
int main()
{
    int num;
    int digit =0;
    int cubeSum = 0;
    cout<<"Enter a Number";
    cin>>num;
    int num1=num;
    while(num!=0)
    {
        digit = num%10;
        cubeSum = cubeSum + (digit*digit*digit);
        num = num /10;
    }

    if(num1==cubeSum)
    cout<<"Bingo! Armstrong Number";
    else
    cout<<"NOT an Armstrong number";
}