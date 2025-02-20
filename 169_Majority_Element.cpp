
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int sizee= nums.size();
        map<int,int> result;
        int element = 0;
        int max_ele = sizee/2;
        for(int i : nums)
        {
            result[i]++;

            if(result[i]>max_ele)
            {
                return i;
            }
        }
        return -1;
    }
};
// way 2 
// bool sort_func(pair<int, int>&a , pair<int,int>& b)
// {
//     if(a.second>b.second)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int sizee= nums.size();
//         map<int,int> result;
//         int element = 0;
//         for(int i=0;i<=sizee/2;i++)
//         {   
//             element=nums[i];
//             result[element]=count(nums.begin(),nums.end(),element);
//         }
//         vector<pair<int , int> >::iterator itt ; 
//         vector<pair<int,int>> vp;
//         for(auto& it : result  )
//         {
//             vp.push_back(it);
//         }
//         sort(vp.begin(),vp.end(),sort_func);
//         for(itt=vp.begin();itt!=vp.end();++itt)
//         {
//             cout<<"FIrst = " << itt->first << "   " << "Second = " << itt->second<<endl ; 
//         }
//         int ele = vp[0].first;
//         return ele ;
//     }
// };
// // way 1 
// int number_calculation(vector<int>& nums , int ele , int size)
// {
//     int counter = 0;
//     for(int i=0;i<size;i++)
//     {
//         if(nums[i]==ele)
//         {
//             counter++;
//         }
//     }
//     return counter;

// }
// bool func(int a , int b)
// {
//     if(a>b)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int sizee= nums.size();
//         vector<int> result;
//         vector<int> sample = nums ;
//         for(int i=0;i<sizee;i++)
//         {

//             int ele = nums[i];
//             int number= number_calculation(sample,ele,sizee);
//             result.push_back(number);
//         }
//         vector<int> tempp = result;
//         sort(result.begin(),result.end(),func);
        
//         for(int i: result)
//         {
//             cout<< i <<"+++++++++" ;
//         }
//         int ele = result[0];
//         int index=0;
//         for(int i=0;i<sizee;i++)
//         {
//             if(tempp[i]==ele)
//             {
//                 index=i;
//                 break;

//             }
//         }
        
//         // cout<<endl;
//         return nums.at(index);
//     }
// };