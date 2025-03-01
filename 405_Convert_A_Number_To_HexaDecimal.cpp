# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Check if the number is decimal or not 
# Approach
<!-- Describe your approach to solving the problem. -->
if the number is decimal use the hex and stream to store and print it 
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
0ms
- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
7.93
# Code
```cpp []
class Solution {
public:
    string toHex(int num) {
        // string temp = to_string(num);
        ostringstream oss;
        oss<<hex<<num;
        string temp = oss.str();
        return temp;
    }
};
```