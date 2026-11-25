#include<vector>
#include<iostream>
using namespace std;


/**
 
    Trapping Rainwater Formula 

        Water = min(maxleft, maxright) - array[i];
        
        left = array[0];

        left = maxleft(left[i-1],array[i])

        right = array[n-1
        ]
        right = maxright(right[i+1],array[i])
  
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

 

Example 1:


Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.
Example 2:

Input: height = [4,2,0,3,2,5]
Output: 9
 

Constraints:

n == height.length
1 <= n <= 2 * 104

        */

int main()
{
    int n;
    cout<<"Enter the Array size";
    cin>>n;
    vector<int> array(n);
    cout<<"Enter the building Elevation height";
    for(int i=0;i<n;i++)
         cin>>array[i];
    vector<int> left(n);
    vector<int> right(n);

        left[0] = array[0];
        right[n-1] = array[n-1];

        for(int i=1;i<n;i++)
        {
            left[i] = max(left[i-1],array[i]);
        }

        for(int i=n-2;i>=0;i--)
        {
            right[i] = max(right[i+1],array[i]);
        }

        int height=0,temp=0;

        for(int i=0;i<n;i++)
        {
            temp = min(left[i],right[i]);
            height += temp-array[i];
        }
    
        cout<<"Trapped Rain H2O"<<height;

}