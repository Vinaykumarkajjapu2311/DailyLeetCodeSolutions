class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<int>prev(n,0),cur(n,0);
        int ans=1e9;
        for(int j=0;j<n;j++)
        {
            prev[j]=matrix[0][j];
        }

        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int s=matrix[i][j]+prev[j];
                int ld=1e9;
                int rd=1e9;
                if(j-1>=0)
                ld=matrix[i][j]+prev[j-1];
                if(j+1<n)
                rd=matrix[i][j]+prev[j+1];
                cur[j]=min(s,min(ld,rd));
            }
            prev=cur;
        }


        for(int j=0;j<n;j++)
        {
            ans=min(ans,prev[j]);
        }
        
        return ans;
    }
};