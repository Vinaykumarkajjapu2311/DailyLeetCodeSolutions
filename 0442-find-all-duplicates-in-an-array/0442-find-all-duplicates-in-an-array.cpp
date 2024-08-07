class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>rset;
        for(int i=0;i<nums.size();i++)
        {
            int idx=abs(nums[i])-1;
            if(nums[idx]<0)
            {
                rset.push_back(abs(nums[i]));
            }
            nums[idx]*=-1;
        }
        return rset;
    }
};