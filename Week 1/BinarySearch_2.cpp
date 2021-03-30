#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n;
	cin>>n;
	ll a[n+1];
	ll i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ll x;
	cin>>x;
	if(a[n/2]==x)
	{
		cout<<"TRUE";
	}
	else
	{
		cout<<"FALSE";
	}
}
