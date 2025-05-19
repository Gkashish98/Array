class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> mp;

        // Count frequency of even numbers only
        for (auto& ele : nums) {
            if (ele % 2 == 0) {
                mp[ele]++;
            }
        }

        if (mp.empty()) return -1; // No even numbers

        int maxFreq = -1;
        int result = -1;

        // Find the most frequent even number with the smallest value in case of tie
        for (auto& val : mp) {
            if (val.second > maxFreq || (val.second == maxFreq && val.first < result)) {
                maxFreq = val.second;
                result = val.first;
            }
        }

        return result;
    }
};
