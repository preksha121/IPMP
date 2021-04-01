class Solution {
public:
    void sortColors(vector<int>& a) {
        int i;
        int maxa=-1;
        int f[5]={0};
        for(i=0;i<a.size();i++)
        {
           f[a[i]]++;
        }
        int j=0;
        for(i=0;i<=3;i++)
        {
           while(f[i]>=0)
           {
               a[j]=i;
               f[i]--;
               j++;
           }
        }
        
    }
};
