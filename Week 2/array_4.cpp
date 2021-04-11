// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends






class Solution
{
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
        vector<int>v;
        int i;
        int j;
        int a;
        int res;int p=0;a=0;j=0;res=0;
        int n=nums.size();
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
    sort(v.begin(),v.end());
    return v;}
};


// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends
