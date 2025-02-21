class Solution {
public:
    int titleToNumber(string s) {
        int size=s.size();
        int temp ;
        if(size==1){
            temp = s[0]-64;
            
        }
        else if(size>1)
        {
            temp=0;
            cout<<"Size = " <<size <<endl;
            for(int i=0;i<size;i++){
                if(i<size-1){
                    int ele = s[i] - 64 ;
                    temp=(ele+temp) * 26;
                }
                else
                {
                    int ele = s[i] - 64 ;
                    temp = temp + ele;
                }

            }
            
        }
        return temp;
        // return 40;
    }
};