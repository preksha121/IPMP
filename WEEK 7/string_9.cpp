class Solution{
    public:
        /*You are required to complete this method */
    int atoi(string s)
    {
        //Your code here
        int res;
        for(int i=0;i<s.length();i++)
        {
            res=res*10+s[i]-'0';
        }
        return res;
    }
};