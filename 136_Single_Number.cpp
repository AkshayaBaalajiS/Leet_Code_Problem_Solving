class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int size=nums.size();
        map<int , int > mmapp ;
        int ele =0;
        for(int i : nums)
        {
            mmapp[i]++;
        }
        for(auto it  :  mmapp)
        {
            if(it.second == 1) 
            {
                ele=it.first;
            }
        }
        return ele ;
    }
};