class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        // for(int i=0;i<size-1;)
        // {
        //     if(nums[i]>0)
        //     {
        //         i++;
        //     }
        //     else
        //     {
        //         nums.push_back(0);
        //         nums.erase(nums.begin()+i);
        //         i++;
        //     }
        // }
        int i=0;
        while(i<size-1)
        {
            if(nums[i]!=0)
            {
                i++;
            }
            else
            {
                nums.push_back(0);
                nums.erase(nums.begin()+i);
                size--;
            }
        }
    }
};