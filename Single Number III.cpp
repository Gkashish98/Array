class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        vector<int>ans;
        int count=0;
        for(auto &ele:mp)
        {
            if(ele.second==1 && count<=2)
            {
                ans.push_back(ele.first);
                count++;
            }
        }
        return ans;
    }
};
