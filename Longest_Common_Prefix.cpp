class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string temp = strs[0] ;
        string result ;
        int flag =0;
        string prev;
        string substring;

        if(strs.size()>1)
        {
            for(int i=0;i<temp.size()+2;i++)
            {
                cout<< "  i+1 "   << i+1 <<endl;
                if(i==0)
                {
                    prev= substring;
                    substring= temp.substr(0,(i+1));
                }
                else
                {
                    prev=substring;
                    substring= temp.substr(0,(i+1));
                }
                for(int j=0;j<strs.size()-1;j++)
                {
                    cout<<j <<"------------> " << strs[j+1] << " ------------> " << substring<<endl;
                    // if(temp[i]==strs[j+1][i])
                    // if(strs[j+1].find(substring)!=std::string::npos)
                    string temp=strs[j+1];
                    cout<<"strs[j+1].substr(0,i)  = " <<temp.substr(0,(i+1))<<endl;
                    if(temp.substr(0,(i+1)).compare(substring)==0)
                    {
                        // continue ;
                        result = prev;
                        cout<<"result ===" << result <<endl;
                    }
                    else
                    {
                        cout<<"FLag = 5 \n";
                        cout<<"------------> " << strs[j+1] << " ------------> " << substring<<endl;
                        
                        if(!substring.empty())
                        {
                            substring.erase(substring.size()-1);
                        }
                        
                        // substring.erase(substring.size()-1);
                
                        result= prev;
                        cout<<"------------> " << strs[j+1] << " ------------> " << substring<<endl;
                        // result="";

                        flag = 5;
                        break;
                    }
                }
                if(flag ==5 )
                {
                    break;
                }
            }
        }
        else
        {
            result = temp;
        }
        return result;
    }


};



Try

// for(int i=1;i<=temp.size();i++)
//             {
//                 for(int j=1;j<strs.size();j++)
//                 {
//                     result_1 = result;
//                     cout<<j<< "  "<< strs[j] << "  " <<endl;
//                     result=temp.substr(0,i);
//                     if(strs[j].find(result)!=std::string::npos)
//                     {
//                         cout<<"------->"<<result_1<<endl;
                        
//                         flag_1=true;
//                     }
//                     else
//                     {  
//                         // cout<<"------->"<<result_1<<endl;

//                         result=substr_s;
//                         flag=true;
//                         break;
//                     }
                    
//                 }
//                 if(flag)
//                 {
//                     i++;
//                 }
//             }



// string temp;
//         // string ssubstr;
//         // bool flag=false;
//         // int subind=1;
//         // for(int i=0;i<strs.size()-1;i++)
//         // {
//         //     temp=strs.substr(0,subind);
//         //     for(int j=i+1;j<strs.size();j++)
//         //     {  
//         //         if(strs[j].find(temp)!=std::string::npos)
//         //         {
//         //             break;
//         //         }
//         //         else
//         //         {
//         //             if(subind<strs[i].size())
//         //             {
//         //                 subind++;
//         //             }
//         //             else if(subind)
//         //         }
                
//         //     }

//         // }
