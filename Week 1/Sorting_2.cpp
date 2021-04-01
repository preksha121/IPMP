// { Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

 // } Driver Code Ends
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int a[], int l, int h);
    {
        // code here
        if(l<h)
       {
           int p=partition(a,l,h);
           quickSort(a,l,pi-1);
           quickSort(a,pi+1,h);
       }
    }
    
    public:
    int partition (int a[], int l, int h)
    {
       // Your code here
      int p=a[h];
      int i=l-1;
      for(j=l;j<=h;j++)
      {
          if(a[j]<p)
          {
              i++;
              swap(a[i],a[j]);
          }
      }
      swap(a[i+1],a[h]);
      return i+1;
    }
};


// { Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends
