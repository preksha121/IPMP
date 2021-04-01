#include<bits/stdc++.h>
using namespace std;
 
#define ff              first
#define ss              second
#define ll          long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)             while(x--) 
#define f(i, a, n)     for (int i = a; i < n; i++)
void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
 bool cmp(ll a, 
              ll b) 
{ 
    return (a>b); 
} 

int main() 
{ c_p_c();
ll t;
t=1;
ll i,j,k;
while(t--)
{
    ll n;
    cin>>n;
    ll a[n+1];
    for(i=0;i<n;i++)
    {
            cin>>a[i];
    }
    ll k,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
    for(i=0;i<n;i++)
    {
            cout<<a[i]<<" ";
    }
}
    return 0; 
} 
