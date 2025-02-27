class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        cout<<"The number is " << n <<endl ;
        
        uint32_t save_n = n ;
        string strr = "";
        while( save_n!=0)
        {
            int rem= save_n%2;
            strr=to_string(rem)+strr;
             save_n= save_n/2;
        }
        cout<<"The string is : " << strr <<endl; 

        cout<<"The reversed string  : " << strr <<endl;
        reverse(strr.begin(),strr.end());
        if(strr.size()<32)
        {
            int added_size = 32 - strr.size();
            for(int i=0;i<added_size;i++)
            {
                strr=strr+"0";
            }
        }
        cout<<"The after 0 the string  : " << strr <<endl;
        long int result =0;


        for(int i=strr.size()-1,j=0;i>=0;i--,j++)
        {
            // result=result+ 
            if(strr[i]=='1')
            {
                result=result+pow(2,j);
                cout<<strr[i] << "-" <<j<<"-"<< result << "   ";
            }
        }
        cout<<result<<"----"<<endl;
        
        uint32_t converted_result = uint32_t(result);
        return  converted_result;
    }
};