class Solution {
public:
    int hammingWeight(int n) {
        int c=__builtin_popcount(n);
        return c;
    }
};