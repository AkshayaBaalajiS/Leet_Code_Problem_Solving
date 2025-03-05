# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
My first thought is to iterate the n from 0 to n   
# Approach
<!-- Describe your approach to solving the problem. -->
My approach is to call a function for each iteration in that function I will be doing binary conversion and counting the number of 1 and return it 

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
93
- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
42Mb
# Code
```cpp []
#include <algorithm>
class Solution {
public:
    int binary_function(int n)
    {
       vector<int>result ;
       while(n!=0)
       {
            int rem = n%2;
            result.push_back(rem);
            n=n/2;
       } 
    //    reverse(result.begin(), result.end());
        int ele =1;
       int count_1 = count(result.begin(),result.end(),ele);
       return count_1;
    }
    vector<int> countBits(int n) {
        int counter= 0;
        int temp=n;
        vector<int> output ;
        // while(temp!=0)
        // {
        //     int rem = temp%2;
            for(int i=0;i<=n;i++)
            {
                int tmep= binary_function(i);
                output.push_back(tmep); 
            }
            // temp=temp/2;
        // }
        return output;

    }
};
```
