// Way 1 : 
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size=nums.size();
        for(int i=0;i<size;i++)
        {
            for(int i : nums)
            {
                cout<<i<<"  " ;
            }
            cout<<endl;
            if(nums[i]==val)
            {
                cout<<"i = " << i << "  nums[i] = " << nums[i]<<endl;
                nums.erase(nums.begin()+i);
                size--;
                i--;
            }

        }

        
        cout<<endl;
        return size  ;

    }
};


// Way 2  :  0 ms code 
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size=nums.size();
        vector<int> sample ;
        for(int i=0;i<size;i++)
        {
            if(nums[i]!=val)
            {
                sample.push_back(nums[i]);
            }
        }
        nums=sample;
        size=sample.size();
        return size  ;

    }
};