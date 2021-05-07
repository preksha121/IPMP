// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends



class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& a, int n) 
    { 
        // code here 
        int i,j;
    
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                swap(a[i][j],a[j][i]);
            }
        }
         for(i=0;i<n;i++)
        {
            int l=0;
            int h=n-1;
            while(l<=h)
            {
                swap(a[l][i],a[h][i]);
                l++;
                h--;
            }
        }
    } 
};


// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        ob.rotateby90(matrix, n);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
