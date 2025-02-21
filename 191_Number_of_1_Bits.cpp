class Solution {
public:
    int hammingWeight(int n) {
        vector<int> nums;
        while(n!=0){
            int tmeo = n%2;
            nums.push_back(tmeo);
            n = n/2;
        }
        return count(nums.begin(),nums.end(),1);
    }
};
// way 2
// class Solution {
// public:
//     int hammingWeight(int n) {
//         vector<int> nums;
//         while(n!=0){
//             int tmeo = n%2;
//             nums.push_back(tmeo);
//             n = n/2;
//         }
//         for(int i : nums){
//             cout<<i<<" ";
//         }cout<<endl;
//         // int tar=1;
//         int count_1 =  count(nums.begin(),nums.end(),1);
//         return count_1;
//     }
// };