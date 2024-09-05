class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       
        bool neg=true;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                neg=false;
                break;
            }
        }
        if(neg)
        {
            return *max_element(nums.begin(),nums.end());
        }

        int cursum=nums[0];
        int maxsum=nums[0];
        for(int i=1;i<nums.size();i++)
        {
           if(cursum<0)
           {
            cursum=0;
           }
           cursum+=nums[i];
           maxsum=max(maxsum,cursum);
        }
        return maxsum;
    }
};