# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
My first thought is to iterate and find which two number addition will give result as 7  
# Approach
<!-- Describe your approach to solving the problem. -->
If the sum of 2 is 7 I ush back the index of i and j to the vector 
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
135 ms
- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
14.06 Mb
# Code
```cpp []
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> vec ;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums.at(i) + nums.at(j) == target) // 332 ms 
                // if(nums[i] + nums[j]== target) // 146 ms 
                {
                    vec.push_back(i);
                    vec.push_back(j);
                }
                else
                {
                    continue;
                }
            }
            
        }
        return vec;
    }
};

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector <int> vec ;
//         for(int i=0;i<nums.size()-1;i++)
//         {
//             for(int j=i+1;j<nums.size();j++)
//             {
//                 if(nums[i] + nums[j] == target)
//                 {
//                     vec.push_back(i);
//                     vec.push_back(j);
//                     break;
//                 }
//                 else
//                 {
//                     continue;
//                 }
//             }
//         }
//         return vec;
//     }
// };
```
way 2 : 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> vec ;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums.at(i) + nums.at(j) == target) // 332 ms 
                // if(nums[i] + nums[j]== target) // 146 ms 
                {
                    vec.push_back(i);
                    vec.push_back(j);
                }
                else
                {
                    continue;
                }
            }
            
        }
        return vec;
    }
};


*/
#include <iostream>
using namespace std ;

void function_to_do_so(int * arr,int n, int ele) 
{

    // for(int i=0;i<n-1;i++)
    // {
    //     int temp = arr[i] + arr[i+1];
    //     if(temp == ele )
    //     {
    //         cout<<"[" << i << "," <<i+1 <<"]" << endl;
    //     }
    //     else 
    //     {
    //         continue;
    //     }
    // }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int temp = arr[i] + arr[j];
            if(temp == ele )
            {
                cout<<"[" << i << "," <<j <<"]" << endl;
            }
            else 
            {
                continue;
            }
        }
    }
}
int main()
{
    // cout<<"THis is the program to find the index addition \n";
    int number ;
    cin >> number ;
    const int size = number ;
    int element  ;
    cin>>element;
    int arr [size];
    for(int i=0;i<number;i++)
    {
        int temp ;
        cin>> temp ;
        arr[i] =  temp ;
    }
    function_to_do_so(arr , number,element);
}
