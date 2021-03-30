// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends




class Solution{
public:
    int findMin(int a[], int n){
       if(n==1)
       {
           return a[0];
       }
       int s=0;
       int e=n-1;
       if(a[0]<=a[e])
       {
           return a[0];
       }
       while(s<=e)
       {
           int mid=s+(e-s)/2;
           if(s<mid&&a[mid]<a[mid-1])
           {
               return a[mid];
           }
           if(e>mid&&a[mid]>a[mid+1])
           {
               return a[mid+1];
           }
           if(a[e]>a[mid])
           {
               e=mid-1;
           }
           else
           {
               s=mid+1;
           }
       }
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
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}  // } Driver Code Ends
