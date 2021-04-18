#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
    public:
    
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int a[], int n) { 
        
        // Your code here
        int i;
        bool p[n+1];
        for(i=0;i<n;i++)
        {
            if(a[i]>=0&&a[i]<=n)
            {
                p[a[i]]=true;
            }
        }
        for(i=1;i<=n;i++)
        {
            if(!p[i])
            {
                return i;
            }
        }
        return n+1;
        
    } 
};

// { Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends
