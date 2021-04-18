// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    /*You are required to complete this method */
    int findMaxDiff(int a[], int n)
    {
      int i;
      int maxa=a[1]-a[0];
      int mina=a[0];
      for(i=1;i<n;i++)
      {
          if((a[i]-mina)>maxa)
              maxa=a[i]-mina;
          if(a[i]<mina)
              mina=a[i];
      }
      return maxa;
    }
};

// { Driver Code Starts.
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
   	int n;
   	cin>>n;
   	int a[n];
   	for(int i=0;i<n;i++)
   	cin>>a[i];
   	Solution ob;
   	cout<<ob.findMaxDiff(a,n)<<endl;
   }
    return 0;
}

