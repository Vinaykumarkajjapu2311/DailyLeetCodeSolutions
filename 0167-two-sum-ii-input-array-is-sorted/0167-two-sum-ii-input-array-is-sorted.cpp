class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l=0;
        int n=nums.size();
        int r=n-1;
        while(l<r)
        {
            if(nums[l]+nums[r]==target)
            {
                return {l+1,r+1};
            }
            else if(nums[l]+nums[r]>target)
            {
                r-=1;
            }
            else
            {
                l+=1;
            }
        }
        return {-1,-1};
    }
};