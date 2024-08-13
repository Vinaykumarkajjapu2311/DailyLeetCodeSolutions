class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        int n=wall.size();
        map<int,int>mpp;
        int maxGaps=0;
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=0;j<wall[i].size()-1;j++)
            {
                sum+=wall[i][j];
                mpp[sum]++;
                maxGaps=max(maxGaps,mpp[sum]);
            }
        }
        return n-maxGaps;
    }
};