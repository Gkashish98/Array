class Solution {
public:
    vector<vector<int>> generateMatrix(int n) 
    {
        vector<vector<int>>matrix(n,vector<int>(n,-1));
        if(n==0)
        {
            return matrix;
        }
        int id=0;
        int top=0;
        int down=n-1;
        int left=0;
        int right=n-1;
        int count=1;
        while(top<=down && left<=right)
        {
            if(id==0)
            {
                for(int i=left;i<=right ;i++)
                {
                    matrix[top][i]=count;
                    count++;
                }
                top++;
            }
            if(id==1)
            {
                for(int i=top;i<=down ;i++)
                {
                    matrix[i][right]=count;
                    count++;
                }
                right--;
            }
            if(id==2)
            {
                for(int i=right;i>=left ;i--)
                {
                    matrix[down][i]=count;
                    count++;
                }
                down--;
            }
            if(id==3)
            {
                for(int i=down; i>=top ;i--)
                {
                    matrix[i][left]=count;
                    count++;
                }
                left++;
            }
            id=(id+1)%4;
        }
        return matrix;
        
    }
};
