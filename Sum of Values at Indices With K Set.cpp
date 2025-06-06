class Solution {
public:
    int countBits(int n)
    {
        int count=0;
        while(n)
        {
            count+=n&1;
            n=n>>1;
        }
        return count;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k)
    {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            int val=countBits(i);
            if(val==k)
            {
                sum+=nums[i];
            }
        }
        return sum;
    }
};
