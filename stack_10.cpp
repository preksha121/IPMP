class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& n1, vector<int>& n2) {
        stack<int>s;
        unordered_map<int,int>m;
        s.push(n2[0]);
        for(int i=1;i<n2.size();i++)
        {
            if(s.empty())
            {
                s.push(n2[i]);
                continue; 
            }
            if(s.empty()==false&&s.top()<n2[i])
            {
                m[s.top()]=n2[i];
                s.pop();
            }
            s.push(n2[i]);
        }
        vector<int>v;
        while(!s.empty())
        {
            m[s.top()]=-1;
            s.pop();
        }
        for(int i=0;i<n1.size();i++)
        {
            if(m.count(n1[i]))
            {
                n1[i]=m[n1[i]];
            }
            else
            {
                n1[i]=-1;
            }
        }
        return n1;
    }
};