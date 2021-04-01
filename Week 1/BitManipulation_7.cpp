#include <bits/stdc++.h>
using namespace std;
int f(int n)
{
    return n & (n - 1);
}
int main()
{
	int n;
    cin>>n;
    cout<<"The number after unsetting the";
    cout<<" rightmost set bit "<<f(n);
    return 0;
}
 
