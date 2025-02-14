class Solution {
public:
    bool isPalindrome(int x) {
        if (x >= 0)
        {
            if(x<9)
            {
                return true;
            }
            else
            {
                int temp=x , rem=0;
                long sum=0; 
            
                // try1 : while is taking more ms 
                // while(x>0)
                // {
                //     rem = x%10;
                //     sum =rem+(sum*10);
                //     x=x/10;
                // }
                
                // try2  : for is good compared to while  
                for(;x>0;)
                {
                    rem = x%10;
                    sum =rem+(sum*10);
                    x=x/10;
                }
                // cout<<endl<<sum<<endl;
                
                // try1 
                // if(sum == temp)
                // {
                //     return true;
                // }
                // else
                // {
                //     return false;
                // }
                
                // try2
                // bool val = ((sum == temp) ? true : false);
                // return val;
                
                //try3  : reduce the memory space
                return  ((sum == temp) ? true : false);
                
            }
        }
        else{
            return false;
        }
    }
};
