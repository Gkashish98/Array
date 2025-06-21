class Solution {
public:
    int tupleSameProduct(vector<int>& nums) 
    {
        int n=nums.size();
        unordered_map<int,int>freq;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                freq[nums[i]*nums[j]]++;
            }
        }
        int ans=0;
        for(auto &val:freq)
        {
            int value=val.second;
            if(value>1)
            {
                ans+=8*(value*(value-1))/2;
            }
        }
        
        return ans;
    }
};
