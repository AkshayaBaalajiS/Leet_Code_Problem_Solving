// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        // return 3;
        int counter = 0 ;
        if(n>1)
        {
            for(int i=n;i>=0;i--)
            {
                if(isBadVersion(i))
                {
                    // i--; // this can be here also 
                }
                else
                {
                    // return counter ;
                    counter=i+1;

                    break;
                }
            }
        }
        else
        {
            cout<<"Direct else \n";
            counter = n;
        }
        return counter ;
    }
};

// way 2 time limt exceed 
// class Solution {
// public:
//     int firstBadVersion(int n) {
//         // return 3;
//         int counter = -1 ; // for counting from -1
//         bool flag = false;
//         int nn=0 ;
//         while(!flag)
//         {
//             flag=isBadVersion(nn);  
//             cout<<"flag "  << flag <<endl;
//             nn++;
//             counter++;
//         }
//         return counter ;
//     }
// };

// way 1  
// class Solution {
// public:
//     int firstBadVersion(int n) {
//         // return 3;
//         int counter = 0 ;
//         for(int i=0;i<n;i++)
//         {
//             if(!isBadVersion(i))
//             {
//                 // cout<<"COunter incremented  : " << counter <<endl;
//                 counter++;
//             }
//             else
//             {
//                 // return counter ;
//                 break;
//             }
//         }
//         return counter ;
//     }
// };