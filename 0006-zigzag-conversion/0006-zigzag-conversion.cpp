class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 || numRows>=s.size())
        {
            return s;
        }

        int i=0,d=1;
        vector<vector<char>>ans(numRows);
        for(auto ch:s)
        {
            ans[i].push_back(ch);
            if(i==0)
            {
                d=1;
            }
            else if(i==numRows-1)
            {
                d=-1;
            }
            i+=d;
        }

        string res;
        for(auto it:ans)
        {
            for(auto c:it)
            {
                res+=c;
            }
        }
        return res;
    }
};