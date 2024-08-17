class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        map<char,int>mpp;
        int l=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(mpp.count(s[i])==0)
            {
                mpp[s[i]]=i;
            }
            else
            {
                ans=max(ans,i-l);
                while(l<=mpp[s[i]])
                {
                    mpp.erase(s[l]);
                    l++;
                }
                mpp[s[i]]=i;
            }
        }
        if(n-l>ans)
        {
            ans=n-l;
        }
        return  ans;
    }
};