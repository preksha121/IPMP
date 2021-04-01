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
void heapify(int a[], int n, int i)
{
    int largest = i; 
    int l = 2 * i + 1; 
    int r = 2 * i + 2; 
    if (l < n && a[l] > a[largest])
        largest = l;
    if (r < n && a[r] > a[largest])
        largest = r;
    if (largest != i) {
        swap(a[i], a[largest]);
        heapify(a, n, largest);
    }
}
void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main() 
{ c_p_c();
ll t;
t=1;
int i,j,k;
while(t--)
{
    int n;
    cin>>n;
    int a[n+1];
    for(i=0;i<n;i++)
    {
            cin>>a[i];
    }
    int  k,j;
  heapSort(a,n);
    for(i=0;i<n;i++)
    {
            cout<<a[i]<<" ";
    }
}
    return 0; 
} 
