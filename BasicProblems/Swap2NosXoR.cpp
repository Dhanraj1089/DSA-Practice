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


(a Xor b) Xor b = a


The two occurrences of b cancel each other out.

The mathematical logic behind it
Let's use the original values A and B.
Operation	Result
a = a ^ b	a = A ^ B
b = a ^ b	b = A ^ B ^ B = A
a = a ^ b	a = A ^ B ^ A = B

Therefore:
- a becomes the original B.
- b becomes the original A.
5. Interview knowledge: Why does XOR work?
The key concept is:

(a Xor b) Xor b = a


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
