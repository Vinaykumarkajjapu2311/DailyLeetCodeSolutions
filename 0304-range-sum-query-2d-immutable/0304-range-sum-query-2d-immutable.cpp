class NumMatrix {
    private:vector<vector<int>>sumMatrix;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        sumMatrix.resize(n+1,vector<int>(m+1,0));
        for(int i=0;i<n;i++)
        {
            int prefix=0;
            for(int j=0;j<m;j++)
            {
                prefix+=matrix[i][j];

                int above=sumMatrix[i][j+1];

                sumMatrix[i+1][j+1]=prefix+above;
            }
        }

    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        row1=row1+1;
        row2=row2+1;
        col1=col1+1;
        col2=col2+1;

        int bottomRight=sumMatrix[row2][col2];
        int topLeft=sumMatrix[row1-1][col1-1];
        int above=sumMatrix[row1-1][col2];
        int left=sumMatrix[row2][col1-1];
        return bottomRight+topLeft-above-left;

    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */