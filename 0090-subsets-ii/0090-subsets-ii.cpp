class Solution {
public:
    void f(int ind,int n,vector<int>&ds,vector<vector<int>>&ans,vector<int>nums)
    {
        ans.push_back(ds);
        for(int i=ind;i<nums.size();i++)
        {
            if(i>ind and nums[i]==nums[i-1])continue;
            ds.push_back(nums[i]);
            f(i+1,n,ds,ans,nums);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>ds;
        sort(nums.begin(),nums.end());
        f(0,n,ds,ans,nums);
        return ans;
    }
};