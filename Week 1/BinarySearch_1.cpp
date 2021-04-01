class Solution {
public:
    int search(vector<int>& a, int t) {
        int s=0;
        int e=a.size()-1;
        while(s<=e)
        {
            int mid=e+(s-e)/2;
            if(t==a[mid])
            {
                return mid;
            }
            else if(a[s]<=a[mid])
            {
                if(t<=a[mid]&&t>=a[s])
                {
                    e=mid-1;
                }
                else
                {
                    s=mid+1;
                }
            }
            else
            {
                if(a[mid]<=t&&t<=a[e])
                {
                    s=mid+1;
                }
                else
                {
                    e=mid-1;
                }
            }
        }
        return -1;
    }
};
