// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


//User function template for C++
class Solution{
public:

	vector<int> valueEqualToIndex(int a[], int n)
	{
	    int s=0;
	    vector<int>v;
	    int e=n-1;
	    while(s<=e)
	    {
	        int mid=e+(s-e)/2;
	        if(mid==a[mid])
	        {
	            v.push_back(mid);
	        }
	        else if (mid>a[mid])
	        {
	            s=mid+1;
	        }
	        else
	        {
	            e=mid-1;
	        }
	    }
	    return v;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.valueEqualToIndex(arr, n);
        if (ans.empty()) {
            cout << "Not Found";
        } else {
            for (int x: ans) {
                cout << x << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
