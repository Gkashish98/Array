// User function Template for C++
class Solution {
  public:
    bool searchPattern(string& txt, string& pat) 
    {
        bool found=false;
        int n=txt.size();
        int m=pat.size();
        for(int i=0;i<=n-m;i++)
        {
            int j;
            for(j=0;j<m;j++)
            {
                if(txt[i+j]!=pat[j])
                {
                    break;
                }
            }
            if(j==m)
            {
                found=true;
            }
        }
       return found;
    }
};
