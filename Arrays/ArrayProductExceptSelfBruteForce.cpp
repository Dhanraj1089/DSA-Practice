

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