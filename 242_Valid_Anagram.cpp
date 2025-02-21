class Solution {
public:
    bool isAnagram(string s, string t) {       
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(s.compare(t)==0)
        {
            return true;
        }
        else{
            return false;
        }
       
    }
};
//way 2 11ms   10.44 mb 
// bool functio(char a , char b)
// {
//     return (a>b ? true : false);
// }
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         int size1 =s.size();
//         int size2 = t.size();
//         bool flag=false;
//         cout<<"Size 1  = " << size1 <<endl;
//         cout<<"Size 2  = " << size2 <<endl;

//         vector<char> v1 ;
//         vector<char> v2 ;
//         if(size1==size2)
//         {
//             for(int i=0 ; i<size1;i++)
//             {
//                 v1.push_back(s[i]);
//                 v2.push_back(t[i]);
//             }        
//             sort(v1.begin(),v1.end(),functio);
//             sort(v2.begin(),v2.end(),functio);
            
//             for(int i=0;i<size1;i++)
//             {
//                 if(v1[i]==v2[i])
//                 {
//                     flag=true;
//                 }
//                 else
//                 {
//                     flag=false;
//                     break;
//                 }
//             }
//         }
//         else
//         {
//             return false;
//         }
//         if(flag)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
        
        
       
//     }
// };
//way 1  3ms 9.7 mb 
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         int size1 =s.size();
//         int size2 = t.size();
//         cout<<"Size 1  = " << size1 <<endl;
//         cout<<"Size 2  = " << size2 <<endl;
        
//         sort(s.begin(),s.end());
//         sort(t.begin(),t.end());

//         if(s.compare(t)==0)
//         {
//             return true;
//         }
//         else{
//             return false;
//         }
       
//     }
// };