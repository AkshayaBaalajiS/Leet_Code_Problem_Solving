# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
First thought is to just reverse the vector 
# Approach
<!-- Describe your approach to solving the problem. -->
Just use the reverse function from the algorithm header 
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
0ms 
- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
27.17 Mb 
# Code
```cpp []
class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(),s.end());
    }
};
```