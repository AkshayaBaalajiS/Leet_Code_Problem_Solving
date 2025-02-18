class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string> vec;
        string result="";
        string space=" ";
        int sizee=s.size();
        cout<<"\n---------------->"<<sizee<< "<---------\n";
        bool last=false;
        for(int i=0;i<sizee+1;i++)
        {
           if(i!=sizee)
           {
                if(s[i]==' ')
                {
                    if(!result.empty())
                    {
                        vec.push_back(result);
                        result="";
                    }
                }
                else
                {
                    result=result+s[i];
                }
           }
           else
           {
                if(!result.empty())
                {
                    vec.push_back(result);
                    result="";
                }
           }
        }
        for(int i=0;i<vec.size();i++)
        {
            cout<<"vec["<< i<<" ]  : " << vec[i]<<"<-------";
        }
        cout<<endl;
        int last_ele = vec.size() -1 ;
        int size = vec[last_ele].size();
        return size;
    }
};
