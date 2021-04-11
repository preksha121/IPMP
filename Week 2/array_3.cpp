// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

int MissingNumber(vector<int>& array, int n);

// Position this line where user code will be pasted.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];

        cout << MissingNumber(array, n) << "\n";
    }
    return 0;
}// } Driver Code Ends


// User function template for C++

int MissingNumber(vector<int>& a, int n) {
    int s=0;
    int i;int k;
    k=0;
    for(i=0;i<n-1;i++)
        {s+=a[i];
        }
    int d=0;
    d=(n*(n+1))/2;
    k=d-s;
    return k;
}
