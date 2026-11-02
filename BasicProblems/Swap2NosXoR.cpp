/*

First, understand XOR (^)
XOR stands for Exclusive OR.

It compares two bits and returns:
A	B	A ^ B
0	0	0
0	1	1
1	0	1
1	1	0

The important rules are:
1. A ^ A = 0
2. A ^ 0 = A
3. A ^ B = B ^ A (commutative)
4. (A ^ B) ^ C = A ^ (B ^ C) (associative)
These properties make XOR swapping possible.



*/


#include <iostream>
using namespace std;

int main() {
    int a;// = 10;
    int b;// = 20;
    cout<<"Enter number 1";
    cin>>a;

    cout<<"Enter Number two";
    cin>>b;


    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
