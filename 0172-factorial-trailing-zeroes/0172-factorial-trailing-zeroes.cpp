class Solution {
public:
    int trailingZeroes(int n) {
        if(n<0)return -1;
        int cnt=0;
        for(int i=5;n/i>=1;i*=5)
        {
            cnt+=n/i;
        }
        return cnt;
    }
};