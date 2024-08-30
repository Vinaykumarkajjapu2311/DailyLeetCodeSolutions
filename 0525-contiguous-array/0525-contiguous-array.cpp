class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int ans=0;
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                sum++;
            }
            else 
            {
                sum--;
            }

            if(sum==0)
            {
                ans=max(ans,i+1);
            }
            if(mpp.find(sum)==mpp.end())
            {
                mpp[sum]=i;
            }
            else
            {
                ans=max(ans,i-mpp[sum]);
            }
        }
        return ans;
    }
};