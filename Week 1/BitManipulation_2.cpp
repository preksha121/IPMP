class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int ans=0,p=31;
        while(n!=0)
        {
            ans+=(n&1)<<p;
            p--;
            n=n>>1;
        }
        return ans;
    }
};
