# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
Check if the start and end have index or not if not increment and decrement index 
# Approach
<!-- Describe your approach to solving the problem. -->
If found swap and move the index (either increment or decrement )
# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
107 ms
- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
10 Mb
# Code
```cpp []
class Solution {
public:
    string reverseVowels(string s) {
        int size= s.size();
        for(int i=0,j=size-1;i<j;){
            char temp ;
            bool flag= false;
            bool bflag=false;
            if((s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')  || (s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') )
            {
               flag=true;  
                if(bflag){
                    cout<<"Swap bet s[i] and s[j] "<<s[i] << "   " << s[j]<<"--"<<endl;

                    temp=s[i];
                    s[i]=s[j];
                    s[j]=temp;

                    i++;
                    j--;
                }
                else
                {
                    // j--;
                }
            }
            else
            {
                i++;
            }
            if((s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u') || (s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U'))
            {
                bflag=true;
                if(flag){
                    cout<<"Swap bet  s[j] and s[i] "<<s[i] << "   " << s[j]<<"--"<<endl;
                    temp=s[i];
                    s[i]=s[j];
                    s[j]=temp;

                    i++;
                    j--;
                }
            }
            else
            {
                j--;
            }
   
        }
        return s;
    }
};
```