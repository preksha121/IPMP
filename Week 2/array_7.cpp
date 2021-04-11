// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int n, vector<int> a){
        // code here
        int i;
        vector<int>v;
        for(i=n-1;i>=0;i--)
        {
            if(a[i]>a[i-1])
            {
                break;
            }
        }
            if(i==0)
            {
                sort(a.begin(),a.end());
                return a;
            }
            int x=a[i-1];
            int s=i;
            for(int j=i+1;j<n;j++)
            {
                if((a[j]>x)&&(a[j]<a[s]))
                {
                    s=j;
                }
            }
            int temp=a[s];
            a[s]=x;
            x=temp;
          //  swap(x,a[s]);
            sort(a.begin()+i,a.end());
    return a;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends
