class Solution {
public:
    int firstUniqChar(string s) {
        int f[259];
        memset(f,-1,sizeof(f));
        for(int i=0;i<s.length();i++)
        {
            if(f[s[i]]==-1)
            {
                f[s[i]]=i;
            }
            else
            {
                f[s[i]]=-2;
            }
        }
        int ans=INT_MAX;
        for(int i=0;i<=256;i++)
        {
            if(f[i]>=0)
            {
            ans=min(ans,f[i]);
            }
        }
        if(ans==INT_MAX)
        {
            return -1;
        }
        return ans;
    }
};S