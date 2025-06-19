class Solution {
public:
    bool isSubsequence(string s, string t)
    {
       int count=0;
       for(int i=0;i<t.size();i++)
       {
         if(count<s.length() && s[count]==t[i])
         {
            count++;
         }
       }
       if(count==s.length())
       {
        return true;
       }
       return false;
       
    }
};
