class Solution {
public:

    long halfPalindrome(long left,bool even)
    {
        long res=left;
        if(!even)left=left/10;
        while(left>0)
        {
            res=res*10 + left%10;
            left/=10;
        }
        return res;
    }
    string nearestPalindromic(string n) {
        int len=n.size();
        int i=len%2==0?len/2 -1 :len/2;
        long firsthalf=stol(n.substr(0,i+1));

        vector<long>possi;
        possi.push_back(halfPalindrome(firsthalf,len%2==0));
        possi.push_back(halfPalindrome(firsthalf+1,len%2==0));
        possi.push_back(halfPalindrome(firsthalf-1,len%2==0));
        possi.push_back((long)pow(10,len-1)-1);
        possi.push_back((long)pow(10,len)+1);

        long diff=LONG_MAX,res=0,n1=stol(n);

        for(auto it:possi)
        {
            if(it==n1)continue;
            if(abs(it-n1)<diff)
            {
                diff=abs(it-n1);
                res=it;
            }
            else if(abs(it-n1)==diff)
            {
                res=min(res,it);
            }
        }
        return to_string(res);

    }
};