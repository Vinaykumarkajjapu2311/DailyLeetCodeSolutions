class Solution {
public:
    int findComplement(int num) {
        int i=31;
        for(;i>=0;i--)
        {
            if (pow(2, i) <= num) break; 
        }
            int xorp=0;
            for(int j=i;j>=0;j--)
            {
                xorp+=pow(2,j);
            }
            return xorp^num;
    }
};