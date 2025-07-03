class Solution {
  public:
    void isPath(int i,int j,int n,int m,string path,vector<string>&ans,vector<vector<int>> &maze,vector<vector<bool>>&visited)
    {
        if(i<0 || j<0 || i>=n || j>=m || maze[i][j]==0 || visited[i][j])
        {
            return ;
        }
        if(i==n-1 && j==m-1)
        {
            ans.push_back(path);
            return ;
        }
        visited[i][j]=true;
        
        isPath(i+1,j,n,m,path+"D",ans,maze,visited);
        isPath(i-1,j,n,m,path+"U",ans,maze,visited);
        isPath(i,j+1,n,m,path+"R",ans,maze,visited);
        isPath(i,j-1,n,m,path+"L",ans,maze,visited);
        
        visited[i][j]=false;
        
    }
    vector<string> ratInMaze(vector<vector<int>>& maze)
    {
        int n=maze.size();
        int m=maze[0].size();
        vector<string>ans;
        vector<vector<bool>>visited(n,vector<bool>(m,false));
        isPath(0,0,n,m,"",ans,maze,visited);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
