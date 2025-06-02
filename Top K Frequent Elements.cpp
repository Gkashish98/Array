class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        vector<vector<int>>bucket(n+1);
        for(auto it:mp)
        {
            int ele=it.first;
            int freq=it.second;
            bucket[freq].push_back(ele);

        }
        vector<int>ans;
        for(int i=n;i>=0 && k>0;i--)
        {
           if(bucket[i].empty())
           {
             continue;
           }
           for(int j=0;j<bucket[i].size() && k>0;j++)
           {
             ans.push_back(bucket[i][j]);
             k--;
           }
        }
        return ans;
    }
};
