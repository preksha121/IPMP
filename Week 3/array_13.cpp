// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

bool isSubSequence(vector<int> &v1, vector<int> &v2, int n, int m) {

    if (m == 0) return true;
    if (n == 0) return false;

    if (v1[n - 1] == v2[m - 1]) return isSubSequence(v1, v2, n - 1, m - 1);

    return isSubSequence(v1, v2, n - 1, m);
}

vector<int> find3Numbers(vector<int>, int);

// Driver program to test above function
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        auto res = find3Numbers(a, n);

        // wrong format output
        if (!res.empty() and res.size() != 3) {
            cout << -1 << "\n";
        }

        if (res.empty()) {
            cout << 0 << "\n";
        } else if ((res[0] < res[1] and res[1] < res[2]) and
                   isSubSequence(a, res, n, res.size())) {
            cout << 1 << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}// } Driver Code Ends


/*The function returns a vector containing the
increasing sub-sequence of length 3 if present
else returns an empty vector */
vector<int> find3Numbers(vector<int> a, int n) {
    vector<int>v;
    int s=INT_MAX,l=INT_MAX;int i;int j;
    for(i=0;i<n;i++)
        {if(a[i]<=s)
            {s=a[i];
            }
        else if(a[i]<=l)
            {l=a[i];
            }
        else
            {break;
            }}
            if(i==n)
            {
                return v;
            }
       for(j=0;j<=i;j++)
       {
           if(a[i]<l)
           {
               s=a[i];
               break;
           }
       }
       v.push_back(s);
        v.push_back(l);
         v.push_back(a[i]);
         return v;
}
