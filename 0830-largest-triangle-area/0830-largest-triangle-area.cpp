class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double res=0;
        for(auto &x : points)
        {
            for(auto &y:points)
            {
                for(auto &z:points)
                {
                    res=max(res,0.5*abs(x[0]*y[1] + y[0]*z[1] + z[0]*x[1] - y[0]*x[1] - z[0] * y[1] - x[0] * z[1]));
                }
            }
        }
        return res;
    }
};