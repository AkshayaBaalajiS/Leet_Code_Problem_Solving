class Solution {
public:
    int addDigits(int num) {
        int temp=num;
        int sum=0;
        while(num!=0)
        {
            int rem = num%10 ;
            sum=sum+rem ;
            num=num/10;
            if(sum>=10 && num==0){
                num=sum;
                sum=0;
            }
        }
      
        return sum;

        cout<<sum<<"<----"<<endl;

        // return 1;
    }
};
// Way 2  0 ms 
// class Solution {
// public:
//     int addDigits(int num) {
//         int temp=num;
//         int sum=0;
//         // while(sum>=9)
//         // {
//         //     sum=0;
//         //     int rem =num%10;
//         //     sum=sum + rem;
//         //     num=num/10;
//         //     if(num==0 && num<10)
//         //     {
//         //         num=sum;
//         //     }
//         // }
//         while(num!=0)
//         {
//             int rem = num%10 ;
//             sum=sum+rem ;
//             num=num/10;
//         }
//         int tot_sum = 0 ;
//         while(sum!=0)
//         {
//             int temp = sum%10  ;
//             tot_sum +=temp;
//             sum=sum/10;
//             if(tot_sum>=10 && sum==0){
//                 sum=tot_sum;
//                 tot_sum=0;
//             }

//         }
//         return tot_sum;

//         cout<<sum<<"<----"<<endl;

//         // return 1;
//     }
// };