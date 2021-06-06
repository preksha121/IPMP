// { Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for c++
class Solution {
  public:
    string removeChars(string s1, string s2) {
        int f[256]={0};
        for(int i=0;i<s2.length();i++)
        {
            f[s2[i]-'a']++;
        }
        string r="";
        for(int i=0;i<s1.length();i++)
        {
            if(f[s1[i]-'a']==0)
            {
                r.push_back(s1[i]);
            }
        }
        return r;
        // code here
    }
};
