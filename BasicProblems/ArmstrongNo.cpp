#include <iostream>
using namespace std;

bool isArmstrong(long long number)
{
    if (number < 0)
    {
        return false;
    }

    long long digitCount = 0;
    long long remaining = number;
    do
    {
        ++digitCount;
        remaining /= 10;
    }
    while (remaining != 0);

    long long sum = 0;
    remaining = number;
    do
    {
        const int digit = static_cast<int>(remaining % 10);
        long long power = 1;

        for (long long i = 0; i < digitCount; ++i)
        {
            if (digit != 0 && power > number / digit)
            {
                return false;
            }
            power *= digit;
        }

        if (power > number - sum)
        {
            return false;
        }
        sum += power;
        remaining /= 10;
    }
    while (remaining != 0);

    return sum == number;
}

int main()
{
    long long number;
    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number))
    {
        cout << "Armstrong number";
    }
    else
    {
        cout << "Not an Armstrong number";
    }
}