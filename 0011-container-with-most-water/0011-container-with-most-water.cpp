class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int maxarea=0;
        int s=0;
        int e=height.size()-1;
        while(s<e)
        {
            int area=(e-s)*min(height[e],height[s]);
            maxarea=max(area,maxarea);

            if(height[s]<height[e])s++;
            else e--;
        }
        return maxarea;
    }
};