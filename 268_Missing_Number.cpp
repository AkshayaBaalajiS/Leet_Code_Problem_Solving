class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        for(int i=0;i<=size;i++)
        {
            auto it = find(nums.begin(),nums.end(),i);
            int position = distance (nums.begin(),it);
            cout << "i = " << i <<"position  = " << position<<endl;
            if(position==size)
            {
                return i;
            }
            
        }
        return 1 ;
    }
};