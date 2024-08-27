class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n=arr.size();
        int cnt=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>maxi)maxi=arr[i];
            if(maxi==i)cnt++;
        }
        return cnt;
    }
};