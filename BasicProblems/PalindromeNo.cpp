#include <iostream>
using namespace std;

int main()
{
    int num;
    int original;
    int reverse = 0;
    int modulo = 0;
    cout<<"Enter the number";
    cin>>num;
    original = num;
    while (num!=0)
    {
        modulo = num%10;
        reverse = (reverse*10) + modulo;
        num /=10;
    }

    cout<<"your number"<<original;
    cout<<"reverse number"<<reverse;

    if(original==reverse)
    cout<<"Bingo!! Palindrome";
    else
    cout<<"NOT Palindrome";

}