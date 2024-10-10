class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n=nums.size();

        vector<int>v(n,-1);
        int t=INT_MIN;

        for(int i=n-1;i>=0;i--)
        {
            t=max(t,nums[i]);
            v[i]=t;
        }

        int ans=INT_MIN;
        int l=0;
        int r=1;

        while(r<n && l<=r)
        {
            if(v[r]>=nums[l])
            {
                ans=max(ans,r-l);
                r++;
            }
            else
            {
                l++;
            }
        }
        return ans;
    }
};