class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]=i;
        }
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            int remaining=target-nums[i];
            if(mpp.find(remaining)!=mpp.end() && mpp[remaining]!=i)
            {
                ans.push_back(i);
                ans.push_back(mpp[remaining]);
                break;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};