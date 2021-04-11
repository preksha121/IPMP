// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<int> twoOddNum(int nums[], int n)  
    {
        vector<int>v;
        int i;
        int j;
        int a;
        int res;int p=0;a=0;j=0;res=0;
        //int n=nums.size();
        for(i=0;i<n;i++)
            {a=a^nums[i];
            }
            //cout<<a;
        int temp=a;
        while((temp&1)==0)
            {p++;
            temp=temp>>1;
    }int mask;
 mask=(1<<p);j=0;
 //cout<<mask;
    for(i=0;i<n;i++)
        {if((mask&nums[i]))
            {j=j^nums[i];
           // cout<<nums[i]<<" ";
            }
        }
    res=a^j;
    v.push_back(j);
    v.push_back(res);
    sort(v.begin(),v.end(),greater<int>());
    return v;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int Arr[N];
        for(int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<int>ans=ob.twoOddNum(Arr,N);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
