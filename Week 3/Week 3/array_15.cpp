// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
int lo(vector<int>a,int s,int e)
{
    if(s<=e)
    {
        int mid=s+(e-s)/2;
        if((mid==0||a[mid-1]==0)&&a[mid]==1)
        {
            return mid;
        }
        else if(a[mid]==0)
        {
            return lo(a,mid+1,e);
        }
        else
        {
            return lo(a,s,mid-1);
        }
        return -1;
    }
}
	int rowWithMax1s(vector<vector<int> > a, int n, int m) {
	    // code here
	    int maxa=0;
	    int j=lo(a[0],0,m-1);
	    if(j==-1)
	    {
	        j=m-1;
	    }
	    for(int i=1;i<n;i++)
	    {
	        while(j>=0&&a[i][j])
	        {
	            j=j-1;
	            maxa=i;
	        }
	    }
	    return maxa;
	}

};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
