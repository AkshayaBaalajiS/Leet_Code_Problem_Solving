# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
My first thought is to find the ele which are same in both ranson and magazine 

# Approach
<!-- Describe your approach to solving the problem. -->
If ele are same delete the ele frmo the ransom and magazine if atlast ransom string is empty return true else false;

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
64 ms
- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
11.74 Mb
# Code
```cpp []
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int size_1 = ransomNote.size();
        int size_2 = magazine.size();
        int final_len  = size_2 - size_1; 
        int counter = 0;
        bool flag = false;
        string temp = "";
        for(int i=0;i<ransomNote.size();)
        {
            // cout<<"Ransom Note = " << ransomNote << "---"<<endl;
            if(magazine.empty())
            {
                break;
            }
            for(int j=0;j<magazine.size();j++)
            {
                if(ransomNote[i]==magazine[j]){
                    flag=true;
                    // ransomNote.erase(i,1);
                    cout<<"ELE GOING TO BE DEL  =  " << magazine[j] << endl;
                    magazine.erase(j,1);
                    cout<<"ELE GOING TO BE DEL from  ransom =  " << ransomNote[i] << endl;
                    ransomNote.erase(i,1); 
                    break;
                }
                else
                {
                    // cout<<"ransomNote[i]==magazine[j]" <<ransomNote[i] << "  " << magazine[j] << "--"<<endl;
                    flag=false;
                }
                if(j==magazine.size()-1)
                {
                    i++;
                }
                
            }
        }
        if(ransomNote.empty())
        {
            flag= true;
        }
        else
        {
            flag = false;
        }
       

        cout<<temp<<"---"<<endl;
        return flag;
    }
};
// class Solution {
// public:
//     bool canConstruct(string ransomNote, string magazine) {
//         int size_1 = ransomNote.size();
//         int size_2 = magazine.size();
//         int final_len  = size_2 - size_1; 
//         int counter = 0;
//         bool flag = false;
//         if(size_1>1)
//         {
//             for(int i=0;i<magazine.size()-ransomNote.size();i++){
//                 string tempp = magazine.substr(i,i+size_1);
//                 if(tempp == ransomNote)
//                 {
//                     flag= true;
//                     break;
//                 }
//                 else
//                 {
//                     flag=false;
//                 }
//             }
//         }else
//         {
//             if(ransomNote == magazine)
//             {
//                 flag = true;
//             }
//             else
//             {
//                 flag=false;
//             }
//         }
//         return flag;
//     }
// };
// class Solution {
// public:
//     bool canConstruct(string ransomNote, string magazine) {
//         int size_1 = ransomNote.size();
//         int size_2 = magazine.size();
//         int final_len  = size_2 - size_1; 
//         if(size_2!=1)
//         {
//             for(int i=0;i<magazine.size();){
//                 string strr = magazine.substr(i,i+size_1);
//                 cout<<"strr  = " << strr <<endl;
//                 if(ransomNote==strr){
//                     return true;
//                 }
//                 else
//                 {
//                     i++;
//                 }
//             }
//         }
//         else
//         {
//             if(ransomNote==magazine){
//                 return true;
//             }
//             else
//             {
//                 return false;
//             }
//         }

//         return false;
//     }
// };
```
