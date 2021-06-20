	vector<int>v;
	bool visited[1006];
	vector<int>f;
	vector<int>dfs(int k,vector<int>adj[])
	{
	    visited[k]=true;
	    f.push_back(k);
	    for(auto i : adj[k])
	    {
	        if(!visited[i])
	        {
	            dfs(i,adj);
	        }
	    }
	    return f;
	}
	vector<int>dfsOfGraph(int k, vector<int> adj[])
	{
	    memset(visited,false,sizeof(visited));
	    vector<int>v=dfs(0,adj);
	   // dfs(0,adj);
	    return v;
	}
};
