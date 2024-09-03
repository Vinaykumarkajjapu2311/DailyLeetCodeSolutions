class Solution {
public:
    int maxScore(string s) {
        int n=s.size();
        int ans=INT_MIN;
        int ones=0;
        int zeros=0;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='1')ones++;
            else zeros++;

            ans=max(ans,zeros-ones);
        }

        if(s[n-1]=='1')ones++;
        return ans+ones;
    }
};