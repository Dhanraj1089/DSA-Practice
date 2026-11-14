
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    cout << "Enter array size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    // Step 1: Calculate total sum
    int totalSum = 0;

    for(int i = 0; i < n; i++)
    {
        totalSum = totalSum + nums[i];
    }

    // Step 2: Initialize left sum
    int leftSum = 0;

    // Step 3: Find pivot index
    for(int i = 0; i < n; i++)
    {
        int rightSum = totalSum - leftSum - nums[i];

        if(leftSum == rightSum)
        {
            cout << "Pivot index: " << i << endl;
            return 0;
        }

        // Add current element to left sum
        leftSum = leftSum + nums[i];
    }

    cout << "Pivot index: -1" << endl;

    return 0;
}