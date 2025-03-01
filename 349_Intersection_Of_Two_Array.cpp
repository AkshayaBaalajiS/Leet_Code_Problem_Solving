# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
My first thought is to find the same element that is on both the vector
# Approach
<!-- Describe your approach to solving the problem. -->
If found push it to the vector for the result and continuously check the ele is repeated or not
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
8ms
- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
13Mb
# Code
```cpp []
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vec_result;
        bool flag = false;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j])
                {
                    if(vec_result.empty()){
                        vec_result.push_back(nums1[i]);
                    }
                    else
                    {
                        for(int k : vec_result){
                            if(nums1[i]!=k){
                                flag=true;
                            }
                            else
                            {
                                flag=false;
                                break;
                            }
                        }
                    }
                    if(flag)
                    {
                        vec_result.push_back(nums1[i]);
                    }
                }
            }
        }
       
        return vec_result;

    }
};
```