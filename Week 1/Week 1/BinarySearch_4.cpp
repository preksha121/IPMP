using namespace std;


 // } Driver Code Ends


//User function template for C++
class Solution{
public:	
	vector<int> printUnsorted(int a[], int n) {
	  int i;vector<int>v;
	  int s=0;
	  int e=n-1;
	  for(s=0;s<n-1;s++)
            {if(a[s]>a[s+1])
                {
                    break;
                }
            }
            if(s==n-1)
                {v.push_back(0);
                v.push_back(0);
                return v;
                }
    for(e=n-1;e>0;e--)
        {if(a[e-1]>a[e])
            {break;
            }
        }int maxa=a[s],mina=a[s];
    for(i=s+1;i<=e;i++)
        {maxa=max(maxa,a[i]);
        mina=min(mina,a[i]);
        }int w;
    for(i=0;i<s;i++)
        {if(a[i]>mina)
            {
            s=i;break;
            }
        }int x;
    for(i=n-1;i>=e+1;i--)
        {if(a[i]<maxa)
            {e=i;
            break;
            }
        }
        v.push_back(s);
        v.push_back(e);
        return v;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.printUnsorted(arr, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
  // } Driver Code Ends
