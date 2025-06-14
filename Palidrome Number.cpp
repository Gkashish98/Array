class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x<0) return false;
        int newVal=x;
        long long result=0;
        while(x>0)
        {
            int last=x%10;
            result=result*10+last;
            x=x/10;
        }
        if(result!=newVal)
        {
            return false;
        }
        return true;
    }
};
