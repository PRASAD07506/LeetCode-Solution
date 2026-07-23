class Solution {
public:
    int nthUglyNumber(int n) {
        std::vector<int> dp(n);
        dp[0] = 1; // 1 is the first ugly number
        
        int p2 = 0, p3 = 0, p5 = 0;
        
        for (int i = 1; i < n; ++i) {
            int next2 = dp[p2] * 2;
            int next3 = dp[p3] * 3;
            int next5 = dp[p5] * 5;
            
            // Pick the minimum of the three possibilities
            int next_ugly = std::min({next2, next3, next5});
            dp[i] = next_ugly;
            
            // Move pointers forward if they produced the chosen minimum
            if (next_ugly == next2) p2++;
            if (next_ugly == next3) p3++;
            if (next_ugly == next5) p5++;
        }
        
        return dp[n - 1];
    }
};