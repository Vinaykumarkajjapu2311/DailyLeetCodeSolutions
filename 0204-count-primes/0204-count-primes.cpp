class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;  // No primes less than 2

        vector<int> prime(n, 1);  // Create a vector of size n and initialize all to 1 (true)
        prime[0] = prime[1] = 0;  // 0 and 1 are not prime numbers

        for (int i = 2; i * i < n; i++) {
            if (prime[i]) {
                // Mark multiples of i as non-prime
                for (int j = i * i; j < n; j += i) {
                    prime[j] = 0;
                }
            }
        }

        // Count the number of primes less than n
        int cnt = 0;
        for (int i = 2; i < n; i++) {
            if (prime[i]) cnt++;
        }

        return cnt;
    }
};
