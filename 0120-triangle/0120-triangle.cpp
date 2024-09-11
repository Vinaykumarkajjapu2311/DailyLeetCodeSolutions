class Solution {
public:
    
    int minimumTotal(vector<vector<int>>& arr) {
        int n=arr.size();
        vector<int>next(n,-1);
        for(int i=n-1;i>=0;i--)
        {
            next[i]=arr[n-1][i];
        }

        for(int i=n-2;i>=0;i--)
        {
            vector<int>cur(n,-1);
            for(int j=i;j>=0;j--)
            {
                int down=arr[i][j]+next[j];
                int diag=arr[i][j]+next[j+1];
                cur[j]=min(diag,down);
            }
            next=cur;
        }
        return next[0];
    }
};