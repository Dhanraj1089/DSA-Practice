/*
Problem:
Product of Array Except Self

Platform:
LeetCode 238

Pattern:
Prefix Product + Suffix Product

Difficulty:
Medium

Approach:
1. Create a prefix product array.
2. Create a suffix product array.
3. Multiply prefix and suffix products for each index.

Time Complexity:
O(n)

Space Complexity:
O(n)

Edge Cases:
- Empty array
- Single element
- One zero
- Multiple zeros
- Negative numbers

Status:
Optimal Time Solution (Uses Extra Space)
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums)
{
    int n = nums.size();

    // Arrays to store prefix and suffix products
    vector<int> prefix(n);
    vector<int> suffix(n);
    vector<int> answer(n);

    // First element has no elements before it
    prefix[0] = 1;

    // Build Prefix Product Array
    for(int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }

    // Last element has no elements after it
    suffix[n - 1] = 1;

    // Build Suffix Product Array
    for(int i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }

    // Multiply prefix and suffix products
    for(int i = 0; i < n; i++)
    {
        answer[i] = prefix[i] * suffix[i];
    }

    return answer;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};

    vector<int> result = productExceptSelf(nums);

    cout << "Output: ";

    for(int x : result)
    {
        cout << x << " ";
    }

    return 0;
}