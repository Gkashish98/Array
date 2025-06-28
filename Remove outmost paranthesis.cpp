class Solution {
public:
    string removeOuterParentheses(string s) 
    {
        string result="";
        int balance=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                if(balance>0)
                {
                    result.push_back(s[i]);
                   
                }
                balance++;
            }
            else
            {
                balance--;
                if(balance>0)
                {
                    result.push_back(s[i]);
                }
            }
            
        }
        return result;
        
    }
};
