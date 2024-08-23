class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int m=t.size();

        int ind=0;
        for(int i=0;i<m;i++)
        {
            if(t[i]==s[ind])ind++;
        }
        if(ind==n)return true;
        return false;
    }
};