class Solution {
public:
    int strStr(string haystack, string needle) {
        int size=haystack.size(); 
        cout<<"Size 1 : " << size <<endl;
        int size_1=needle.size();
        cout<<"Size 2  : " << size_1 <<endl;
        int return_size=0;
        bool notfound=false;
        string temp="";
        if(size>=size_1){
            for(int i=0;i<=size-size_1;)
            {
                int sample = i+size_1;
                cout<<"i="<< i <<"  "<<"samplec="<<sample;
                temp=haystack.substr(i,size_1);
                cout<<"Temp = " <<temp<<endl;
                if(temp==needle)
                {
                    return_size=i;
                    notfound=false;
                    i++;
                    break;
                }
                else
                {
                    i++;
                    notfound=true;
                }
            }
        }
        else
        {
            return -1;
        }
        if(notfound)
        {
            return -1;
        }
        return return_size;
    }
};
// good program to understand the substr in string 