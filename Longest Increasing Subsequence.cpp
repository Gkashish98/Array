class Solution {
public:
    int lengthOfLIS(vector<int>& nums)
    {
        int n=nums.size();
        int maxVal=1;
        vector<int>dp(n,1);
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
               if(nums[i]>nums[j])
               {
                  dp[i]=max(dp[i],dp[j]+1);
               }
            }
            maxVal=max(maxVal,dp[i]);
        }
        return maxVal;
    }
};
