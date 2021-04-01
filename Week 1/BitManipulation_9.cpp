// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    /*  function to find position of first set 
    bit in the given number
     * n: given input for which we want to get
          the position of first set bit
     */
    unsigned int getFirstSetBit(int n){
        
        // Your code here
        int c=1;
        while(n>0)
        {
            if(n&1)
            {
                return c;
            }
            c++;
            n/=2;
        }
        return 0;
        
    }
};

// { Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t; // testcases
    while(t--)
    {
        int n;
        cin>>n; //input n
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n)); // function to get answer
    }
	return 0;
}
  // } Driver Code Ends
