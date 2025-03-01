# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
My first thought is to put the key of the map as string ele and find the occurences in it

# Approach
<!-- Describe your approach to solving the problem. -->
My approach on map is to iterate the string from start till end and  if the occurence is 1 return the index 

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
34 ms
- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
14.3 Mb
# Code
```cpp []
class Solution {
public:
    int firstUniqChar(string s) {
        map<char , int> map_ci;
        for(int i=0;i<s.size();i++)
        {
            char c= s[i] ;
            map_ci[c]++;
        }
        // for(auto it : map_ci)
        // {
        //     cout<<"first  " << it.first << "  " <<"  Second = " << it.second <<endl ;
        // }
        int index =0;
        bool not_found = false;
        for(int i=0;i<s.size();i++)
        {  
            char ch = s[i];
            if(map_ci[ch] == 1)
            {
                index=i;
                not_found=false;
                break;
            }
            if(i==s.size()-1)
            {
                not_found=true;
            }
        }
        if(not_found)
        {
            return -1;
        }
        return index ;
    }
};
```
