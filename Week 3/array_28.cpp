#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


//User function template for C++
class Solution{
public:	

	void segregateEvenOdd(int a[], int n) {
	  //  sort(a,a+n);
	    // code here
	    int i=0,j=-1;
	    for(i=0;i<n;i++)
	        {if(a[i]%2==0)
	            {j++;
	            swap(a[i],a[j]);
	            }
	        }
	     
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.segregateEvenOdd(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
