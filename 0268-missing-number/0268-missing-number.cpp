class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
         long long int x=n*(n+1)/2;
        long long int sum=0;
        for(auto it:nums)
        {
            sum+=it;
        }
        return x-sum;
    }
};