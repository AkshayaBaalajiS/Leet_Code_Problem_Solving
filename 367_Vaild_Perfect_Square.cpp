# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
My first thought is to find do the half of the number given but that wont work 
# Approach
<!-- Describe your approach to solving the problem. -->
So i iterate till the i * i <= num and inside the for I am checking if the i * i == num then I will enable that flag and at last I will retirn that flag  
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
0ms 
- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
7.7 Mb
# Code
```cpp []
class Solution {
public:
    bool isPerfectSquare(int num) {
        bool flag = false;
        if(num==1)
        {
            return true ;
        }
        for(long i=1;i*i<=num;i++)
        {
            if(i * i == num)
            {
                flag=true;
                break;
            }
            else
            {
                flag=false;
            }
        }
        return flag ;

    }
};
```