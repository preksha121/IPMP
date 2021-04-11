
class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int i=0,j=0;
        int c=0;
        set<int>s;
        while(i<n)
        {
            s.insert(a[i]);
            i++;
        }
        while(j<m)
        {
             s.insert(b[j]);
             j++;
        }
        return s.size();
    }
};

