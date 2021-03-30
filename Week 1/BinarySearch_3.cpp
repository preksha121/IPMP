#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll ceilSearch(ll a[], ll l, ll h, ll x)
{
     if(x<=a[l])
     {
     	return l;
	 }
	 if(x>a[h])
	 {
	 	return  -1;
	 }
	 ll mid=h+(l-h)/2;
	 if(a[mid]==x)
	 {
	 	return mid;
	 }
     else if(a[mid]<x)
     {
     	if(mid+1<=h&&a[mid+1]>=x)
     	{
     		return mid+1;
		 }
		 else
		 {
		 	return ceilSearch(a,mid+1,h,x);
		 }
	 }
	 else
	 {
	 	if(mid-1>=l&&a[mid-1]<x)
	 	{
	 		return mid;
		 }
		 else
		 {
		 	return ceilSearch(a,l,mid-1,x);
		 }
	 }
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
    ll index = ceilSearch(a, 0, n-1, x);
    if(index == -1)
        cout << "Ceiling of " << x << " doesn't exist in array ";
    else
        cout << "ceiling of " << x << " is " << a[index];
     
    return 0;
}
 
