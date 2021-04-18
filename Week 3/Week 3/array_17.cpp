
int  minimum_difference(vector<int>a){
 	// Code here
 	int mina=INT_MAX;
 	sort(a.begin(),a.end());
 	for(int i=0;i<a.size()-1;i++)
 	{
 	    if(abs(a[i]-a[i+1])<mina)
 	    {
 	        mina=abs(a[i]-a[i+1]);
 	    }
 	}
 	return mina;
}  // { Driver Code Starts

