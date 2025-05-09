class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int>ans(2,-1);
        int i=0;int j=nums.size()-1;
        while(i<=j)
        {
            if(nums[i]==target)
            {
                ans[0]=i;
                break;
            }
            i++;
        }
        while(j>=i)
        {
            if(nums[j]==target)
            {
                ans[1]=j;
                break;
            }
            j--;
        }
        return ans;
    }
};
