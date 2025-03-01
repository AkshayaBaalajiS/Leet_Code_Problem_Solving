# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
First thought is to find the which are the element in s is in t  
# Approach
<!-- Describe your approach to solving the problem. -->
If element found erase that else iterate to next 
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
3ms 
- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
9.32 Mb
# Code
```cpp []
class Solution {
public:
    char findTheDifference(string s, string t) {
        for(int i=0;i<s.size();){
            for(int j=0;j<t.size();)
            {
                if(s[i]==t[j]){
                    t.erase(j,1);
                    i++;
                }
                else
                {
                    j++;
                }
            }
        }
        cout<<t << "----"<<endl;
        char result = t[0];
        return result;
    }
};
```
