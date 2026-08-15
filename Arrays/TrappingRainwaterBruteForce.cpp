#include<iostream>
#include<vector>

using namespace std;

/* Algorithm -- BruteForce Counterproductive 

"For every position, I need to know the maximum wall on both sides. 
The lower of those two walls determines the maximum water level."

#Traverse Every Array Element.
# Find the highest bars on the left and right sides.
#Take Smaller of two heights.
#The difference between the smaller height and the height of the current element is the amount 
of water that can be stored in this array element. 

i.e. The water that is trapped.


*/

int maxWater(vector<int> &arr)
{
    int result = 0;

    for(int i=1;i<arr.size()-1;i++)
    {
        /* here write the logic  */
         int left = arr[i];
         for (int j=0;j<i;j++)
         {
            left = max(left,arr[j]);
         }
         
         int right = arr[i];
         for(int j=i+1;j<arr.size();j++)
         {
            right =max(right,arr[j]);
         }

         result += min(left,right)-arr[i];
        }

                 return result;


}

    int main()
    {
        vector<int> arr={2,1,5,3,1,0,4};
        cout<<maxWater(arr);
        return 0;
    }


