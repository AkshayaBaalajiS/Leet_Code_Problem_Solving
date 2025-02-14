class Solution {
public:
vector<int> empty;

string str="";
int num;
   vector<int> plusOne(vector<int>& digits) {
        vector<int> result_vec;
        // vector to int 
        int size=digits.size();
        cout<<"Size = " << size <<endl;
        bool initialflag = true;
        bool mainflag=false;
        if(size>1)
        {
            cout<<"Inside if ";
            for(int i=size-1;i>=0;i--)
            {
                if(initialflag)
                {
                    int number =  digits[i];
                    number+=1;
                    if(number>9)
                    {
                        digits[i]=0;
                        mainflag=true;
                    }
                    else
                    {
                        digits[i]=number;
                    }
                    initialflag=false;
                }
                else
                {
                    if(mainflag)
                    {
                        int number =  digits[i];
                        number+=1;
                        if(number>9)
                        {
                            digits[i]=0;
                            mainflag=true;
                        }
                        else
                        {
                            digits[i]=number;
                            mainflag=false;
                        }
                    }
                }
            }
            if(mainflag)
            {
                digits.insert(digits.begin(),1);
            }
        }
        else
        {
            cout<<"in else ";
             int number = digits[0];
            number=number+1;
            cout<<number<<endl;
            if(number > 9)
            {
                result_vec.push_back(1);
                result_vec.push_back(0);
            }
            else
            {
                result_vec.push_back(number);
            }
            return result_vec;
        }
        return digits;
    }

};
