// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


//User function template for C++
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int a[], int n, int x) {
int i;
sort(a,a+n);
int l=0;
int r=n-1;
while(l<r)
    {if(a[l]+a[r]==x)
        {return 1;
        }
    else if(a[l]+a[r]<x)
        {l++;
        }
    else
        {r--;
        }
    }
     
     return 0;   
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}
  // } Driver Code Ends
