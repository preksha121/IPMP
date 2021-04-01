#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll bi(ll a[], ll l, ll h, ll x)
{
     while(l<=h)
     {
     	int mid=h+(l-h)/2;
     	if(a[mid]==x)
     	{
     		return mid;
		 }
		 else if(a[mid]<x)
		 {
		 	l=mid+1;
		 }
		 else
		 {
		 	h=mid-1;
		 }
	 }
	 return -1;
}
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
	ll l=0;
	ll h=1;
	ll val=a[0];
	while(val<x)
	{
		l=h;
		h=2*h;
		val=a[h];
	}
    ll ans = bi(a, l, h, x);
    if (ans==-1)
        cout << "Element not found";
    else
        cout << "Element found at index " << ans;
    return 0;
 
}
 
