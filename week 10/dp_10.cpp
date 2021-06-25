class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>s;
        s.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>s.back())
            {
                s.push_back(nums[i]);
            }
            else
            {
                int j=lower_bound(s.begin(),s.end(),nums[i])-s.begin();
                s[j]=nums[i];
            }
        }
        return s.size();
    }
};