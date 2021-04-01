#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll med(ll a[],ll b[],ll n)
{
     ll l1=0,h1=n-1;
    ll l2=0,h2=n-1;
    if(n==1)
    {
    	return (a[0]+b[0])/2;
	}
	while(true)
	{
		ll me1=a[(h1 + l1)/2];
    	ll me2=b[(h2 + l2)/2];
    	ll mi1=(l1+h1)/2;
    	ll mi2=(l2+h2)/2;
    	if(h1 - l1 == 1)
    	{
        return (max(a[l1] , b[l2]) +
        min(a[h1] , b[h2])) / 2;
    	}
    	if(me1==me2)
    	{
    		return me1;
		}
		else if(me1>me2)
		{
			h1=mi1;
			l2=mi2;
		}
		else
		{
		    l1=mi1;
		    h2=mi2;
		}
	}
}
int main()
{
    ll n;
	cin>>n;
	ll a[n+1];ll b[n+1];
	ll i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
	cout<<med(a,b,n);
    return 0;
}
 
