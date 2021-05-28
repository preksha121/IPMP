class Solution {
public:
    string reverseWords(string s) {
        int l=s.size();
        if(l%2==0)
        {
            int j=l/2;
            while(j<=l-1)
            {
                 string temp;
            temp = s[l - j - 1];
            s[l - j - 1] = s[j];
            s[j] = temp;
            j += 1;
            }
            
        }
        else
        {
            int j=(l/2)+1;
            while(j<=l-1)
            {
                 string temp;
            temp = s[l - j - 1];
            s[l - j - 1] = s[j];
            s[j] = temp;
            j += 1;
            }
            
        }
        return s;
    }
       
};