class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool forward=true;
        bool backward=true;
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i]>=nums[i-1])
            {

            }
            else
            {
                forward=false;
                break;
            }
        }

        for(int i=1;i<n;i++)
        {
            if(nums[i]<=nums[i-1])
            {

            }
            else
            {
                backward=false;
                break;
            }
        }
        return forward | backward;
    }
};