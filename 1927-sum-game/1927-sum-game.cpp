class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();

        int leftSum = 0, rightSum = 0;
        int leftQ = 0, rightQ = 0;

        for (int i = 0; i < n / 2; i++) {
            if (num[i] == '?')
                leftQ++;
            else
                leftSum += num[i] - '0';
        }

        for (int i = n / 2; i < n; i++) {
            if (num[i] == '?')
                rightQ++;
            else
                rightSum += num[i] - '0';
        }

        // Difference between the number of ? on both sides
        int qDiff = leftQ - rightQ;

        // Difference between existing digit sums
        int sumDiff = leftSum - rightSum;

        // Alice can win if the two differences cannot be balanced
        return sumDiff * 2 != -9 * qDiff;
    }
};