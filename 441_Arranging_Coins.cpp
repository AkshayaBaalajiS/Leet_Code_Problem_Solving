# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
My first approach is to iterafrom starting from 1 and do substraction with the number which is passed as argument with the index 
# Approach
<!-- Describe your approach to solving the problem. -->
When the difference goes below 0 return that index -1 
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
11ms 
- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
8.76 Mb
# Code
```cpp []
class Solution {
public:
    int arrangeCoins(int n) {
        int temp = n ;
        int diff =0 ;
        int index = 0 ;
        for(int i=1; temp>=0;i++ )
        {
            diff = temp -i ;
            temp=temp-i ;
            if(diff <=0)
            {
                index = i-1;
            }
        }
        return index;
    }
};
```