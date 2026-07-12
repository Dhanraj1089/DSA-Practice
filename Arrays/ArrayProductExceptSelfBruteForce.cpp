
/*
Problem:
Product of Array Except Self

Platform:
LeetCode 238

Pattern:
Prefix Product / Prefix & Suffix

Difficulty:
Medium

Approach:
Brute Force

For each element in the array:
1. Traverse the entire array.
2. Multiply all elements except the current one.
3. Store the product in the answer array.

Time Complexity:
O(n²)

Space Complexity:
O(n)   // Output array (excluding output array, auxiliary space is O(1))

Edge Cases:
- Empty array
- Single element
- One zero in the array
- Multiple zeros in the array
- Negative numbers
- Large values causing integer overflow

Status:
✅ Brute Force Solution
🔜 Next: Optimal Prefix & Suffix Solution (O(n) Time, O(1) Extra Space)
*/
#include<iostream> 
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector <int>& nums)
{
    int n = nums.size();
   vector <int> answer(n);

   for(int i=0; i<n; i++)
   {
       int product = 1;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                product *= nums[j];
            }

            answer[i] = product;
        }

   }
   return answer;
}

int main()
{
    vector <int> nums = {10,50,80,100};
    vector <int> result = productExceptSelf(nums);
    for(int x:result)
    {
        cout<<x<<" ";
    }
}