class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat)
    {
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                mp[i-j].push_back(mat[i][j]);
            }
        }
        for(auto& ele:mp)
        {
            sort(ele.second.begin(),ele.second.end());
        }
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                mat[i][j]=mp[i-j].front();
                mp[i-j].erase(mp[i-j].begin());
            }
        }
       return mat;
    }
};
