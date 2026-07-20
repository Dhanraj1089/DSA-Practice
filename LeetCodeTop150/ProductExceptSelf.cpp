class Solution
{
public:

    vector<int> productExceptSelf(vector<int>& nums)
    {
        int n = nums.size();

        // Prefix product array
        vector<int> prefix(n);

        // Suffix product array
        vector<int> suffix(n);

        // Final answer
        vector<int> answer(n);

        // First prefix value
        prefix[0] = 1;

        // Build prefix products
        for(int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }

        // Last suffix value
        suffix[n - 1] = 1;

        // Build suffix products
        for(int i = n - 2; i >= 0; i--)
        {
            suffix[i] = suffix[i + 1] * nums[i + 1];
        }

        // Calculate final answer
        for(int i = 0; i < n; i++)
        {
            answer[i] = prefix[i] * suffix[i];
        }

        return answer;
    }
};