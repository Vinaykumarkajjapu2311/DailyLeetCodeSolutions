class Solution {
public:
   
    int uniquePaths(int m, int n) {
        // vector<vector<int>>dp(m,vector<int>(n,-1));
        // dp[0][0]=1;

        vector<int>prev(n,0);
        for(int i=0;i<m;i++)
        {
            vector<int>temp(n);
            for(int j=0;j<n;j++)
            {
                if(i==0 && j==0)temp[0]=1;
                else
                {
                    
                    int up=0;
                    if(i>0)up=prev[j];

                    int left=0;
                    if(j>0)left=temp[j-1];
                    temp[j]=up+left;
                }
            }
            prev=temp;
        }
        return prev[n-1];
    }
};