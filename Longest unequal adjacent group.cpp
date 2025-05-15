class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) 
    {
        vector<string>ans;
        if(words.size()==0)
        {
            return ans;
        }
        ans.push_back(words[0]);
        int prevGroup=groups[0];
        for(int i=0;i<words.size();i++)
        {
            if(groups[i]!=prevGroup)
            {
                ans.push_back(words[i]);
                prevGroup=groups[i];
            }
        }
        return ans;
    }
};
