class Solution {
public:
    int f(int i,int j,vector<vector<int>>& arr,int n,vector<vector<int>>&dp)
    {
        if(i==n-1)return arr[n-1][j];
        if(dp[i][j]!=-1)return dp[i][j];

        int down=arr[i][j]+f(i+1,j,arr,n,dp);
        int dig=arr[i][j]+f(i+1,j+1,arr,n,dp);
        return dp[i][j]=min(down,dig);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        int ans=f(0,0,triangle,n,dp);
        return ans;
    }
};