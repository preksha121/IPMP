
// arr[] : int input array of integers
// k : the quadruple sum required
vector<vector<int> > fourSum(vector<int> &a,int k) {
    // Your code goes here
    vector<char>res;
    map<int,pair<int,int>>mp;
    int n=a.size();
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            mp[a[i]+a[j]]={i,j};
        }
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            int s=a[i]+a[j];
            if(mp.find(k-s)!=mp.end())
            {
                pair<int,int>p=mp[k-s];
                if(p.first!=i&&p.second!=j&&p.first!=j&&p.second!=i)
                {
                    res.push_back(a[i]);
                    res.push_back(a[j]);
                    res.push_back(a[p.first]);
                    res.push_back(a[p.second]);
                    res.push_back("$");
                    
                }
            }
        }
    }
    return res;
    
}
