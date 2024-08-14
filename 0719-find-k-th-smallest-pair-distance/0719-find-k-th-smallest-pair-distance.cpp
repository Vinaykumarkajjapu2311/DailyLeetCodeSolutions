class Solution {
public:
    int slidingwindow(int diff,vector<int>arr,int n)
    {
        int j=0;
        int cnt=0;
        for(int i=1;i<n;i++)
        {
            while(arr[i]-arr[j]>diff)j++;
            cnt+=(i-j);
        }
        return cnt;
    }
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int high=nums[n-1]-nums[0];
        int low=INT_MAX;
        for(int i=1;i<n;i++)
        {
            low=min(low,nums[i]-nums[i-1]);
        }

        while(low<high)
        {
            int mid=(low+high)/2;
            int ans=slidingwindow(mid,nums,n);
            if(ans<k)low=mid+1;
            else high=mid;
        }
        return low;
    }
};