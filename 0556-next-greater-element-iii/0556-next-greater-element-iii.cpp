class Solution {
public:
    int nextGreaterElement(int n) {
        string s= to_string(n);
        if(n==INT_MAX)return -1;
        next_permutation(s.begin(),s.end());
        long ans=0;
        for(int i=0;i<s.size();i++)
        {
            ans=ans*10+(int)(s[i]-'0');
        }
        if(ans>INT_MAX)return -1;
        if(ans>n)return ans;
        return -1;
    }
};