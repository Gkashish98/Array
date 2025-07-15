class Solution {
public:
    bool isValid(string word) 
    {
        int countVowel=0;
        int countconsonant=0;
        if(word.size()<3)
        {
            return false;
        }
        for(int i=0;i<word.size();i++)
        {
            if(!isalnum(word[i]))
            {
                return false;
            }
            char lower=tolower(word[i]);
            if(lower=='a' || lower=='e' || lower=='i' || lower=='o' || lower=='u' )
            {
                countVowel++;
            }
            else if(!isdigit(word[i]))
            {
                countconsonant++;
            }
        }
            return countVowel>=1 && countconsonant>=1;
        
    }
};
