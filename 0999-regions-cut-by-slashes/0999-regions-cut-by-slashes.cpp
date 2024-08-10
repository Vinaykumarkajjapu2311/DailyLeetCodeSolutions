class Solution {
public:
void dfs(int i,int j,vector<vector<int>>&mat)
{
    if(i<0 ||i >=mat.size() || j<0||j>=mat.size()||mat[i][j]==1)return;
    mat[i][j]=1;
    dfs(i+1,j,mat);
    dfs(i,j+1,mat);
    dfs(i-1,j,mat);
    dfs(i,j-1,mat);
}
    int regionsBySlashes(vector<string>& grid) {
        int n=grid.size();

        vector<vector<int>>mat(3*n,vector<int>(3*n,0));

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='/')
                {
                    mat[3*i][3*j+2]=mat[3*i+1][3*j+1]=mat[3*i+2][3*j]=1;
                }
                if(grid[i][j]=='\\')
                {
                    mat[3*i][3*j]=mat[3*i+1][3*j+1]=mat[3*i+2][3*j+2]=1;
                }
            }
           
        }
         int cnt=0;
            for(int i=0;i<3*n;i++)
            {
                for(int j=0;j<3*n;j++)
                {
                    if(mat[i][j]==0)
                    {
                        dfs(i,j,mat);
                        cnt++;
                    }
                }
            }
        return cnt;
    }
};