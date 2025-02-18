bool sort_vec(int a , int b )
{
    if(a<b)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size=nums.size();
        bool flag1=false;
        int result=0;
        for(int i=0;i<size;i++)
        {
            if(target==nums[i])
            {
                flag1=false;
                cout<<i<<endl;
                result=i;
                break;
            }
            else
            {
                flag1=true;
            }
        }
        if(true)
        {
            nums.push_back(target);
            sort(nums.begin(),nums.end(),sort_vec);
            size++;
            for(int i=0;i<size;i++)
            {
                if(target==nums[i])
                {
                    flag1=false;
                    cout<<i<<endl;
                    result=i;
                    break;
                }
                else
                {
                    flag1=true;
                }
            }

        }
        return result;
    }

    


};
