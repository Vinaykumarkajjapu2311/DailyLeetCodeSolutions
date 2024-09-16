class Solution {
public:
    int convert(string time)
    {
        int hourToMinute = stoi(time.substr(0, 2)) * 60;
        int minute = stoi(time.substr(3, 2));
        return hourToMinute + minute;
    }
    int findMinDifference(vector<string>& timePoints) {
        int n=timePoints.size();
        vector<int>arr(n);
        
        int ans=1e9;
        for(int i=0;i<n;i++)
        {
            int t1=convert(timePoints[i]);
            arr[i]=t1;
        }
    sort(arr.begin(),arr.end());
        for(int i=1;i<n;i++)
        {
            ans=min(ans,arr[i]-arr[i-1]);
        }

        ans=min(ans,1440+arr[0]-arr[n-1]);
        return ans;
    }
};