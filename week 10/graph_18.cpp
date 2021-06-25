
    int u, v;
    int [,]rGraph = new int[V, V];
    for (u = 0; u < V; u++)
        for (v = 0; v < V; v++)
            rGraph[u, v] = graph[u, v];
 
    int []parent = new int[V]; 
  
    int max_flow = 0; 
    while (bfs(rGraph, s, t, parent))
    {
        int path_flow = int.MaxValue;
  
        for (v = t; v != s; v = parent[v])
        {
            u = parent[v];
            path_flow = Math.Min(path_flow, 
                                 rGraph[u, v]);
        }
        for (v = t; v != s; v = parent[v])
        {
            u = parent[v];
            rGraph[u, v] -= path_flow;
            rGraph[v, u] += path_flow;
        }
        max_flow += path_flow;
    }
    return max_flow;