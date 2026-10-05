#include<iostream>
using namespace std;
int main()
{
    int n;
    int factorial = 1; //factorial of Zero is 1;
    cout << "Enter the number N: ";
    cin >> n;
    while(n>0)
    {
        factorial = factorial * n;
        n--;
    } 

    cout << "The factorial of the number is: " << factorial << endl;
}