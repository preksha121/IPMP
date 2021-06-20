bool isCyclicConntected(vector<int> adj[], int s,
                        int V, vector<bool>& visited)
{
    vector<int> parent(V, -1);
    queue<int> q;
    visited[s] = true;
    q.push(s);
 
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (auto v : adj[u]) {
            if (!visited[v]) {
                visited[v] = true;
                q.push(v);
                parent[v] = u;
            }
            else if (parent[u] != v)
                return true;
        }
    }
    return false;
}