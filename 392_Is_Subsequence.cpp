# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
First I thought to find the s is empty and t is empty if s is empty put true else continue and it t is empty return false 
# Approach
<!-- Describe your approach to solving the problem. -->
If remove the first ele if the ele we are finding is not found and at last comapre the string same or not 
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
3ms 
- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
8.5 Mb 
# Code
```cpp []
class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool flag=false;
        cout<<"Initial Size of t  " << t.size() <<endl; 
        if(s.empty()){
            return true;
        }
        if(t.empty()){
            return false;
        }
        int j=0;
        for(int i=0;i<s.size();)
        {
            while(j<t.size() && j!=t.size())
            {
                if(s[i]==t[i])
                {
                    cout<<s[i]<<t[j];
                    i++;
                    j++;
                }
                else{
                    t.erase(j,1);
                    // cout<<"String t after erase = " << t <<" and j = " << j <<endl;
                }
                if(j==t.size())
                {
                   flag=true;
                   break;
                }
            }
            if(flag){
                break;
            }
        }
        cout<<"After all erase the string is "<<t<<"---"<<endl;
        if(t==s)
        {
            flag= true;
        }  
        else
        {
            flag=false;
        }
        return flag;
    }
};
// class Solution {
// public:
//     bool isSubsequence(string s, string t) {
//         bool flag=false;
//         cout<<"Initial Size of t  " << t.size() <<endl; 
//         if(s.empty()){
//             return true;
//         }
//         int j=0;
//         for(int i=0;i<s.size();){
//             for(;j<t.size();){
//                 if(s[i]==t[j])
//                 {
                    
//                     cout<< s[i] << t[j] << "---" << "i++"<<endl;
//                     i++;
//                     j++;
//                     break;
//                 }
//                 else
//                 {
//                     cout<<"index  j " << j <<endl;
//                     t.erase(j,1);
//                     cout<<"Size of t = " << t.size() <<"String is "<< t <<endl;
//                 }
//                 if(j==t.size()){
//                     break;
//                 }
//             }
//             // cout<<"i= " << i <<endl;
//             // if(i==s.size()){
//             //     return true;
//             // }
//         }
//         cout<<t<<endl;
//         if(s==t){
//             return true;
//         }
                
//         return flag;
//     }
// };
// class Solution {
// public:
//     bool isSubsequence(string s, string t) {
//         bool flag=false;
//         if(s.empty()){
//             return true;
//         }
//         vector<int> vec_result ;
//         for(int i=0;i<s.size();i++){
//            auto it  = find(t.begin(),t.end(),s[i]);
//            int indexx = distance(t.begin(),it);
//            t[indexx] = 0;
//            char ch = s[i];
//            vec_result.push_back(indexx);
           

//         }
//         cout<<"After erase V  = " << t  <<endl;
//         for(auto it :  vec_result){
//             cout<<it <<endl;
//         }
//         vector<int> store_vec = vec_result;
//         sort(store_vec.begin(),store_vec.end());

//         for(int i=0;i<store_vec.size();i++){
//             if(store_vec[i]==vec_result[i] && store_vec[i]!=t.size()){
//                 flag=true;
//             }
//             else
//             {
//                 flag=false;
//                 break;
//             }
//         }
        
//         return flag;
//     }
// };
// class Solution {
// public:
//     bool isSubsequence(string s, string t) {
//         bool flag=false;
//         if(s.empty()){
//             return true;
//         }
//         for(int i=0;i<s.size();i++){
//             for(int j=0;j<t.size();j++){
//                 if(s[i]==t[j])
//                 {
//                     flag=true;
//                     break;
//                 }
//                 else
//                 {
//                     flag=false;
//                 }

//             }
//             if(!flag){
//                 return false;
//                 break;
//             }
//         }
//         return flag;
//     }
// };
// try 1 
// class Solution {
// public:
//     bool isSubsequence(string s, string t) {
//         bool flag=false;
//         if(s.empty()){
//             return true;
//         }
//         for(int i=0;i<s.size();i++){
//             for(int j=0;j<t.size();j++){
//                 if(s[i]==t[j])
//                 {
//                     flag=true;
//                     break;
//                 }
//                 else
//                 {
//                     flag=false;
//                 }

//             }
//             if(!flag){
//                 return false;
//                 break;
//             }
//         }
//         return flag;
//     }
// };
```