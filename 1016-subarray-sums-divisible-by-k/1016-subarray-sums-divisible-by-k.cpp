class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans=0,sum=0,rem=0;
        unordered_map<int,int>mpp;
        mpp[rem]++;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            rem=sum%k;
            if(rem<0)
            {
                rem+=k;
            }
            if(mpp.find(rem)!=mpp.end())
            {
                ans+=mpp[rem];
            }
            mpp[rem]++;
        }
        return ans;
    }
};