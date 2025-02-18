bool func(int a , int b)
    {
        if(a<b)
        {
            return true;
        }
        else
        {
            return false;
        }
    
    }
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // testing 
        // nums1.push_back(4);
        vector<int> result_arr;
        int tremp=0;
        for(int i=0;i<n;i++)
        {
            tremp =nums2[i];
            result_arr.push_back(tremp);
        }
        for(int j=0;j<m;j++)
        {

            tremp =nums1[j];
            result_arr.push_back(tremp);
        }
        

        // for(int i)
        sort(result_arr.begin(),result_arr.end(),func);

        for(int i:  result_arr)
        {
            cout<<i<<"   " ;
        }
        cout<<endl;
        nums1=result_arr;
    }
    
};

