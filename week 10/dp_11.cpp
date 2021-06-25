// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
		

	public:
	int maxSumIS(int a[], int n)  
	{  
	    // Your code goes here
	    int dp[n+1];
	    int maxa=0;
	    for(int i=0;i<n;i++)
	    {
	        dp[i]=a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        //dp[i]=1;
	        for(int j=0;j<i;j++)
	        {
	            if(a[j]<a[i]&&dp[i]<dp[j]+a[i])
	            {
	                dp[i]=dp[j]+a[i];
	            }
	        }
	        maxa=max(maxa,dp[i]);
	    }
	    return maxa;
	}  
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends