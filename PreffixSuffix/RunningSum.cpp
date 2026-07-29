

#include <iostream>
#include<vector>

using namespace std;

int main()
{

    vector<int> array={7,10,11,15,34,45};
    int n = array.size();

    //Solve this problem using Prefix sum. 
    // Time Complexity O(n) 
    // Space Complexity O(n)

    vector<int> prefix(n);

//Prefix formula Initializing 

    prefix[0] = array[0];
    for (int i=1;i<n;i++)
    {
      prefix[i] = prefix[i-1]+array[i];
      
    }
    cout<<"Running Sum of the array is ";
    //print prefix of i 
    for (int i=0;i<n;i++)
    {
        cout<<prefix[i]<<"\n ";
    }
}