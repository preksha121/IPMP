class Solution {
public:
    void dfs(vector<vector<char>>& A, int i, int j)
    {
        if(i < 0 || j < 0 || i >= A.size() || j >= A[i].size() || A[i][j]=='0')
            return;
        A[i][j] = '0';
        //r.push_back(make_pair(i,j));
        dfs(A, i+1, j);
        dfs(A, i-1, j);
        dfs(A, i, j-1);
        dfs(A, i, j+1);
        return;
    }
    int numIslands(vector<vector<char>>&A)  {
        int count = 0;
        for(int i=0; i<A.size(); i++)
        {
            for(int j=0; j<A[i].size(); j++)
            {
                if(A[i][j] == '1')
                {
                        dfs(A, i, j); 
                        count++;
                }   
                }
            }
        return count;
        }

};