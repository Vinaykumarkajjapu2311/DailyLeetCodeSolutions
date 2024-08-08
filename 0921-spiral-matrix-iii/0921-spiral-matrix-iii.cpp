class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rstart, int cstart) {
        int totalele=rows*cols;
        vector<vector<int>>result;

        result.push_back({rstart,cstart});
        if(totalele==1)return result;

        for(int stepIncrease=1;;stepIncrease+=2)
        {
            vector<vector<int>>directions={
                {0,1,stepIncrease},
                {1,0,stepIncrease},
                {0,-1,stepIncrease+1},
                {-1,0,stepIncrease+1}
            };

            for(auto it:directions)
            {
                int rowIncrement=it[0];
                int colIncrement=it[1];
                int steps=it[2];

                while(steps-- > 0)
                {
                    rstart+=rowIncrement;
                    cstart+=colIncrement;

                    if(rstart>=0 && rstart<rows && cstart>=0 && cstart<cols)
                    {
                        result.push_back({rstart,cstart});
                        if(result.size()==totalele)return result;
                    }
                }
            }
        }

    }
};