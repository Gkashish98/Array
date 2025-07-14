class Solution {
  public:
    void solve(int idx,vector<int>&arr, string &temp, unordered_map<char,string> &mp,vector<string> &result)
    {
        if(idx==arr.size())
        {
            result.push_back(temp);
            return;
        }
        char ch = arr[idx] + '0'; 
        if(mp.find(ch)==mp.end())
        {
            solve(idx+1,arr,temp,mp,result);
            return;
        }

        string s = mp[ch];
        for(auto &c:s)
        {
            temp.push_back(c);
            solve(idx+1,arr,temp,mp,result);
            temp.pop_back();
        }
    }
    vector<string> possibleWords(vector<int> &arr) 
    {
        vector<string>result;
        if(arr.size()==0)
        {
            return {};
        }
        
        unordered_map<char,string>mp;
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        
        string temp="";
        solve(0,arr,temp,mp,result);
        
        return result;
    }
};
