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
  
 */

