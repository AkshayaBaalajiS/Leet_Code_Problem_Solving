class Solution {
public:
    int romanToInt(string s) {
        int i=0;
        int sum =0 ;
        for (;s[i]!=0;)
        {
            // cout<<s[i] << "    " ; 
            switch (s[i])
            {
                case 'I' :
                    if(i<s.size())
                    {
                        if(s[i+1]=='V')
                        {
                            sum=sum+4;
                            i=i+1;
                        }
                        else if(s[i+1]=='X')
                        {
                            sum=sum+9;
                            i=i+1;
                        }
                        else
                        {
                            sum=sum+1;
                        }

                    }
                    
                    break;
                case 'V' :
                    sum=sum+5;
                    break;
                case 'X' :
                    if(i<s.size())
                    {
                        if(s[i+1]=='L')
                        {
                            sum=sum+40;
                            i=i+1;
                        }
                        else if(s[i+1]=='C')
                        {
                            sum=sum+90;
                            i=i+1;
                        }
                        else{
                            sum=sum+10;
                        }
                    }                    
                    break;

                case 'L' :
                    sum=sum+50;
                    break;
                case 'C' :
                    if(i<s.size())
                    {
                        if(s[i+1]=='D')
                        {
                            sum=sum+400;
                            i=i+1;
                        }
                        else if(s[i+1]=='M')
                        {
                            sum=sum+900;
                            i=i+1;
                        }
                         else{
                            sum=sum+100;
                        }
                    }
                   
                    break;
                case 'D' :
                    sum=sum+500;
                    break;
                case 'M' :
                    sum=sum+1000;
                    break;
                
            }
            i++;
        }        
        return sum;
    
    }
};
