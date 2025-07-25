class Solution {
public:
    int maxSum(vector<int>& nums)
    {
       int maxEle=INT_MIN;
       int sum=0;
       unordered_map<int,int>mp;
       for(int i=0;i<nums.size();i++)
       {
         mp[nums[i]]++;
       }
       for(auto &ele:mp)
       {
        if(ele.first>0)
        {
          sum+=ele.first;
        }
        maxEle=max(maxEle,ele.first);
       }
       if(sum==0)
       {
          return maxEle;
       }
       return sum;
    }
};
