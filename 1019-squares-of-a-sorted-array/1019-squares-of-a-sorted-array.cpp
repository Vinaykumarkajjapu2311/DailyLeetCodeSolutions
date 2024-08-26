class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int left=0,right=n-1;
        int index=n-1;
        vector<int>ans(n);
        while(left<=right)
        {
            int leftSq=nums[left]*nums[left];
            int rightSq=nums[right]*nums[right];

            if(leftSq>rightSq)
            {
                ans[index]=leftSq;
                left++;
                index--;
            }
            else
            {
                ans[index]=rightSq;
                right--;
                index--;
            }
        }
        return ans;
    }
};