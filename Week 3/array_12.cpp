// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



// Function to find the two repeated element
// arr: input array
// N: denoting that the size of array is N + 2 and range of elements is [1, N]
pair<int,int> twoRepeated (int a[], int N)
{
   vector<int>v;
   for(int i=0;i<N;i++)
   {
       if(a[abs(a[i])]>0)
       {
           a[abs(a[i])]=-a[abs(a[i])];
       }
       else
       {
           v.push_back(abs(a[i]));
       }
   }
   sort(v.begin(),v.end());
   pair<int,int>p;
  p.first=v[0];
  p.second=v[1];
  return p;
    
}

// { Driver Code Starts.

int main()
{
    int t,n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        int a[n+2];
        
        for(int i=0;i<n+2;i++)
            cin>>a[i];
        
        pair<int , int>res;
        res = twoRepeated(a, n);
        cout<<res.first<<" "<<res.second<<endl;
    }
    return 0;
}
  // } Driver Code Ends
