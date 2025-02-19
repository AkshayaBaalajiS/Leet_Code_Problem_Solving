class  Solution {
public:
     bool isPalindrome(string s) {
        int high_size=s.size()-1;
        int low_size=0;
        while(low_size<high_size)
        {
            if(!isalnum(s[low_size]))
            {
                low_size++;
                continue;
            }
            if(!isalnum(s[high_size]))
            {
                high_size--;
                continue; // this will make to skip the current iteration 
            }
            if(tolower(s[low_size]) != tolower(s[high_size]))
            {
                cout<< " tolower(s[low_size]) = " <<tolower(s[low_size]) << "   tolower(s[high_size]) = " <<tolower(s[high_size])<<"<-" <<endl; 
                return false;
            }
            low_size++;
            high_size--;
        }
        return true;
    }    
};
//way 1 
// class Solution {
// public:
//     bool isPalindrome(string s) {
//         string str=s;
//         string reverse;
//         string normal;
//         for(int i=0;i<str.size();i++)
//         {
//             if(isalpha(str[i]) || isdigit(str[i]))
//             {
//                 reverse=reverse+(char)tolower(str[i]);
//                 normal=(char)tolower(str[i]) + normal ;
//             }
//         }
//         cout<<reverse<<"+++++++\n";
//         cout<<normal<<"-------------\n";
//         if(reverse==normal)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
        

//         // return true;
//     }
// };
