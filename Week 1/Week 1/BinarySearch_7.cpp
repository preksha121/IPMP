#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll maxa(ll a[], ll l, ll h)
{
     if (l==h) 
        return a[l]; 
    if ((h== l + 1) && a[l] >= a[h]) 
        return a[l]; 
    if ((h== l + 1) && a[l] < a[h]) 
        return a[h]; 
   	int mid=h+(l-h)/2;
    if(a[mid]>a[mid+1]&&a[mid]>a[mid-1])
    return a[mid];
  	if(a[mid]>a[mid+1]&&a[mid]<a[mid-1])
  	return maxa(a,l,mid-1);
 	else
 	return maxa(a,mid+1,h);
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
    cout<< maxa(a, 0, n-1);
    return 0;
}
 
