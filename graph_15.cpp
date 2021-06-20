stack<int> Stack;
  
    bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
        visited[i] = false;
  
    for(int i = 0; i < V; i++)
        if(visited[i] == false)
            fillOrder(i, visited, Stack);
  
    Graph gr = getTranspose();
    for(int i = 0; i < V; i++)
        visited[i] = false;
    while (Stack.empty() == false)
    {
        int v = Stack.top();
        Stack.pop();
        if (visited[v] == false)
        {
            gr.DFSUtil(v, visited);
            cout << endl;
        }
    }