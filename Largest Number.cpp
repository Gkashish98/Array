class Solution {
public:
 static bool check(string &s1,string &s2)
{
    return (s1+s2)>=(s2+s1);
}
    string largestNumber(vector<int>& nums) 
    {
        int x=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                x=x+1;
            }
        }
        if(x==nums.size())
        {
            return "0";
        }
        vector<string>s(nums.size(),"");
        for(int i=0;i<s.size();i++)
        {
            s[i]=to_string(nums[i]);
        }
        sort(s.begin(),s.end(),check);
        string ans="";
        for(int i=0;i<s.size();i++)
        {
           ans=ans+(s[i]);
        }
        return ans;
    }
};
