class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            int ind=abs(nums[i])-1;

            if(nums[ind]<0)
            {
                continue;
            }
            nums[ind]*=-1;
        }

        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)ans.push_back(i+1);
        }
        return ans;
    }
};