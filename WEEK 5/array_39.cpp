 vector<vector<int> > ans(n + m - 1);
 
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans[i + j].push_back(arr[j][i]);
        }
    }
 
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
 
        cout << endl;
    }
