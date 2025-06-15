class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            int reverse_value = 26 - (s[i] - 'a'); 
            ans += reverse_value * (i + 1); 
        }
        return ans;
    }
};
