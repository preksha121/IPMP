// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string s)
    {
       //Your code here
       int f[256]={0};
       for(int i=0;i<s.length();i++)
       {
           f[s[i]-'a']++;
       }
       
       char ch;
       int fl=0;
      for(int i=0;i<s.length();i++)
      {
          if(f[s[i]-'a']==1)
          {
              ch=s[i];
              fl=1;
              break;
          }
      }
      if(fl==0)
      {
          return (char)-1;
      }
       return ch;
       
    }

};