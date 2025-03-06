# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
My first thought is to find the find the smallest vector first 
# Approach
<!-- Describe your approach to solving the problem. -->
Then Find the repeating element in the both vector push to a vector and remove the ele from the found vector  
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
7ms 
- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
14.26 Mb
# Code
```cpp []
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int s1 = nums1.size();
        int s2 = nums2.size();
        bool flag=false;
        if(nums1.size()>nums2.size())
        {
            int temp = s1;
            s1= s2;
            s2 = temp;  
            flag=true;
        }
        for(int i=0;i<s1;i++)
        {
            for(int j=0;j<s2;j++)
            {
                if(!flag)
                {
                    if(nums1[i] == nums2[j])
                    {
                        int tmep = nums1[i];
                        result.push_back(tmep);
                        nums2.erase(nums2.begin()+j);
                        s2--;
                        break;
                    }
                }
                else
                {
                    if(nums2[i] == nums1[j])
                    {
                        int tmep = nums2[i];
                        result.push_back(tmep);
                        nums1.erase(nums1.begin()+j);
                        s2--;
                        break;
                    }
                }
                
            }
        }
        // for(int i :  nums1)
        // {
        //     for(int j : nums2)
        //     {
        //         if(i==j)
        //         {
        //             result.push_back(i);
        //         }
        //     }
        // }
        // set<int> set_result;
        // for(int i : result)
        // {
        //     set_result.insert(i);

        // }
        // result.clear();
        // for(int i  : set_result )
        // {
        //     result.push_back(i);
        // }
        return result;
    }
};
```
