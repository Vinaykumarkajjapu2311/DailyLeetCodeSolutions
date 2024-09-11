class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        int ans=1e9;
        for(int j=0;j<n;j++)
        {
            dp[0][j]=matrix[0][j];
        }

        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int s=matrix[i][j]+dp[i-1][j];
                int ld=1e9;
                int rd=1e9;
                if(j-1>=0)
                ld=matrix[i][j]+dp[i-1][j-1];
                if(j+1<n)
                rd=matrix[i][j]+dp[i-1][j+1];
                dp[i][j]=min(s,min(ld,rd));
            }
        }


        for(int j=0;j<n;j++)
        {
            ans=min(ans,dp[n-1][j]);
        }
        
        return ans;
    }
};