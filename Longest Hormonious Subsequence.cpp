class Solution {
public:
    int findLHS(vector<int>& nums)
    {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int ans=0;
        for(auto &ele:mp)
        {
            int key=ele.first;
            int freq=ele.second;
            if(mp.count(key+1))
            {
              ans=max(ans,mp[key+1]+freq);
            }
        }
        return ans;
    }
};
