class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size=nums.size();
        cout<<"Size = " << size<<endl;
        // for(int i=0;i<size-1;i++)
        // {
        //     if(i==0)
        //     {
        //         int number = nums[i];
        //         int number_1 = nums[i+1];
        //         if(number == number_1)
        //         {
        //             nums.erase(nums.begin()+i+1);
        //             size--;
        //         }
        //         number_1=nums[i+1];
        //         if(i+1 < size && number == number_1)
        //         {
        //             nums.erase(nums.begin()+i+1);
        //             size--;
        //         }
        //     }
        //     else
        //     {
        //         cout<< " i  == " << i << endl;
        //         int number = nums[i];
        //         cout<<"NUber = " << number <<endl;
        //         int number_1 = nums[i+1];
        //         cout<<"NUber_1 = " << number_1 <<endl;
        //         int number_0 = nums[i-1];
        //         cout<<"NUber_0 = " << number_0 <<endl;

        //         if(number == number_1)
        //         {
        //             nums.erase(nums.begin()+i+1);
        //             size--;
        //         }
        //         else if(number==number_0)
        //         {
        //             nums.erase(nums.begin()+i);
        //             size--;
        //         }
        //         cout<<"++++++++++++++++++++++++++++++\n";
        //     }
        //     cout<<"Now the array is  : " ;
        //     for(int i : nums )
        //     {
        //         cout<< i << "   " ;
        //     }
        //     cout<<endl;
        // }
        // for(int i=0;i<size-1;i++)
        // {
        //     int temp = i+1 ;
        //     for(int j=i+1;j<size;j++)
        //     {
        //         if(j<temp+1)
        //         {
        //             cout<< " i and j  = " << i << "  " << j<<endl ;
        //             if(i>0 && nums[i-1]==nums[j-1])
        //             {
        //                 cout<<"i >0 \n";
        //                 cout<<"nums[i]==nums[j]  = " << nums[i]<< "  " << nums[j] <<endl;
        //                 nums.erase(nums.begin()+i);
        //                 size--;
        //             }
                    
        //             if(nums[i]==nums[j])
        //             {
        //                 cout<<"nums[i]==nums[j]  = " << nums[i]<< "  " << nums[j] <<endl;
        //                 nums.erase(nums.begin()+j);
        //                 size--;
        //             }
        //         }
        //     }
        for(int i=0;i<size-1;)
        {
            int temp = i+1 ;
            if(nums[i]==nums[temp])
            {
                nums.erase(nums.begin()+i);
                size--;
            }
            else
            {
                i++;
            }
            // cout<<"Now the array is  : " ;
            // for(int i : nums )
            // {
            //     cout<< i << "   " ;
            // }
            // cout<<endl;
        }
        return size;
    }
};


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size=nums.size();
        for(int i=0;i<size-1;)
        {
            int temp = i+1 ;
            if(nums[i]==nums[temp])
            {
                nums.erase(nums.begin()+i);
                size--;
            }
            else
            {
                i++;
            }
        }
        return size;
    }
};
