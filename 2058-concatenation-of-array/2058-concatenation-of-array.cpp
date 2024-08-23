class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans(2*nums.size(),0);
        int n=nums.size();
        for(int i=0;i<2*n;i++)
        {
            if(i<n)
            {
                ans[i]=nums[i];
            }
            else
            {
                ans[i]=nums[i%n];
            }

        }
        return ans;
    }
};