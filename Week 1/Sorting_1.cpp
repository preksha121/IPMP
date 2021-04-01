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
    void merge(int a[], int l, int m, int e)
    {
        int i =l;
        int j=m+1;
        int k=l;
        int temp[100000];
        while(i<=m&&j<=e)
        {
                if(a[i]<=a[j])
                {
                    temp[k++]=a[i++];
                }
                else
                {
                    temp[k++]=a[j++];
                }
            
        }
        while(i<=m)
        {
            temp[k++]=a[i++];
        }
          while(j<=e)
        {
            temp[k++]=a[j++];
        }
       for(i=l;i<=e;i++) 
       {
           a[i]=temp[i];
       }
         
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l>=r)
    {
        return;
    }
        int m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
};

// { Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends
