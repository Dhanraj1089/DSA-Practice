#include<iostream>
#include <cmath>
using namespace std;
int main()
{

    int num,i;
    cout<<"Enter a number";
    cin>>num;
    bool isPrime = true;
    if(num<=1)
    {
        isPrime = false;
    }
    else
    {
        //from i=2 to N check modulo of i and if its Zero return false and break the loop
        for(i=2;i<sqrt(num);i++)
        {
            if(num%i==0)
            {
                isPrime=false;
                break;
            }
        }
    }

    if(isPrime)
    cout<<"its a prime number";
    else
    cout<<"not a prime number";
}