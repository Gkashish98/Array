class Solution {
public:
    int maxDifference(string s)
    {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        int minEven=INT_MAX, maxOdd=INT_MIN;
        for(auto &ele:mp)
        {
            if(ele.second%2==0)
            {
                minEven=min(minEven,ele.second);
            }
            else
            {
                maxOdd=max(maxOdd,ele.second);
            }
        }
        int ans=INT_MIN;
        if(minEven!=INT_MAX && maxOdd!=INT_MIN)
        {
           ans=max(ans,(maxOdd-minEven));
        }
        return ans;
    }
};
