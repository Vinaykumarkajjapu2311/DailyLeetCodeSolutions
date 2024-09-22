class Solution {
public:
     int countSteps(int cur, long n) {
        long steps = 0;
        long first = cur, last = cur;
        while (first <= n) {
            steps += min(n + 1, last + 1) - first;
            first *= 10;
            last = last * 10 + 9;
        }
        return steps;
    }
    int findKthNumber(int n, int k) {
        int cur = 1;  // Start with 1
        k--;  // Since we already consider 1 to be in the sequence
        while (k > 0) {
            int steps = countSteps(cur, n);
            if (steps <= k) {
                // If the number of steps is less than or equal to k,
                // move to the next number (cur + 1)
                cur++;
                k -= steps;
            } else {
                // Otherwise, go deeper (cur * 10)
                cur *= 10;
                k--;
            }
        }
        return cur;
    }
};