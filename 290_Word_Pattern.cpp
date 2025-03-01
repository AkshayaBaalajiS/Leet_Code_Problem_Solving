# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
First thought is to break the string and find it is repeated or not but later I found it is wrong approach  
# Approach
<!-- Describe your approach to solving the problem. -->
So my next approach is to find the map second ele is repated or not if repeated return false 
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
3ms
- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
10 Mb
# Code
```cpp []
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int size = pattern.size();
        int full_size = s.size();
        vector<string> string_vec;
        vector<string>str_vec ;
        string temp ="";
        for(int i=0;i<full_size;i++)
        {
            if(s[i]!=' ')
            {
                temp = temp + s[i];
                if(i==full_size-1)
                {
                    string_vec.push_back(temp);
                    temp="";
                }
            }
            else
            {
                string_vec.push_back(temp);
                temp="";
            }

        }
            bool flag=false;

        if(size==string_vec.size())
        {
            for(string i :  string_vec )
            {
                cout<<"i  = " << i <<endl ;
            }
            // for(int i=0;i<string_vec.size()-1;i++)
            // {
            //     for(int j=i+1;j<string_vec.size();j++)
            //     {
            //         if(string_vec[i]==string_vec[j])
            //         {
            //             cout<<string_vec[i] << "----" <<string_vec[i+1]<<endl;
            //             return false;
            //         }
            //     }
                
            // }

            map<char,string> mmapp;
            for(int i=0 ; i<size ;i++)
            {
                char temp = pattern[i];
                mmapp[temp]=string_vec[i];
            }
            for(auto it = mmapp.begin();next(it)!=mmapp.end();it++  )
            {
                for(auto it_1 = next(it);it_1!=mmapp.end();it_1++ )
                {
                    if(it->second == it_1->second )
                    {
                        return false;
                    }
                }
            }

            // for(auto it : mmapp  )
            // {
            //     cout<<"First = " << it.first  << "   it.second = " << it.second <<endl ; 
            // }
            string expec_result = "";
            for(int i =0 ;i<size;i++)
            {
                char ele = pattern[i];
                if(i==size-1)
                {
                    expec_result=expec_result+mmapp[ele];
                }
                else
                {
                    expec_result=expec_result+mmapp[ele]+" ";
                }
            } 
            cout<<"expec_result ="<<expec_result<<"---"<<endl;
            if(s==expec_result)
            {
                flag=true;
            }
        }
        
        return flag; 

    }
};
// another way 
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int size = pattern.size();
        int full_size = s.size();
        vector<string> string_vec;
        vector<string>str_vec ;
        string temp ="";
        for(int i=0;i<full_size;i++)
        {
            if(s[i]!=' ')
            {
                temp = temp + s[i];
                if(i==full_size-1)
                {
                    string_vec.push_back(temp);
                    temp="";
                }
            }
            else
            {
                string_vec.push_back(temp);
                temp="";
            }

        }
        bool flag=false;

        if(size==string_vec.size())
        {
            for(string i :  string_vec )
            {
                cout<<"i  = " << i <<endl ;
            }
            // for(int i=0;i<string_vec.size()-1;i++)
            // {
            //     for(int j=i+1;j<string_vec.size();j++)
            //     {
            //         if(string_vec[i]==string_vec[j])
            //         {
            //             cout<<string_vec[i] << "----" <<string_vec[i+1]<<endl;
            //             return false;
            //         }
            //     }
                
            // }

            map<char,string> mmapp;
            for(int i=0 ; i<size ;i++)
            {
                char temp = pattern[i];
                mmapp[temp]=string_vec[i];
            }
            for(auto it = mmapp.begin();next(it)!=mmapp.end();it++  )
            {
                for(auto it_1 = next(it);it_1!=mmapp.end();it_1++ )
                {
                    if(it->second == it_1->second )
                    {
                        return false;
                    }
                }
            }

            // for(auto it : mmapp  )
            // {
            //     cout<<"First = " << it.first  << "   it.second = " << it.second <<endl ; 
            // }
            string expec_result = "";
            for(int i =0 ;i<size;i++)
            {
                char ele = pattern[i];
                if(i==size-1)
                {
                    expec_result=expec_result+mmapp[ele];
                }
                else
                {
                    expec_result=expec_result+mmapp[ele]+" ";
                }
            } 
            cout<<"expec_result ="<<expec_result<<"---"<<endl;
            if(s==expec_result)
            {
                flag=true;
            }
        }
        
        return flag; 

    }
};

```
