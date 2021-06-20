// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution
{
    public:
    //Function to return Breadth First Traversal of given graph.
    	bool visited[1006];
	vector<int>f;
//	queue<int>q;
	vector<int>dfs(int src,vector<int>adj[])
	{
	    queue<int>q;
	    q.push(src);
	    visited[src]=true;
	   // f.push_back(src);
	    while(!q.empty())
	    {
	        int p=q.front();
	        f.push_back(p);
	        q.pop();
	        for(auto i : adj[p])
	        {
	            if(!visited[i])
	            {
	                q.push(i);
	                visited[i]=true;
	            }
	        }
	    }
	    return f;
	}
	vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	     memset(visited,false,sizeof(visited));
	    vector<int>v=dfs(0,adj);
	   // dfs(0,adj);
	    return v;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    // 		adj[v].push_back(u);
    	}
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int>ans=obj.bfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}  // } Driver Code Ends