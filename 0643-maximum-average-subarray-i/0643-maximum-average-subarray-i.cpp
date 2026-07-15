class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        double res = 0;
        double ans = 0;

        for (int i = 0; i < k; i++) {
            res += nums[i];
        }

        ans = res;
        for (int i = k; i < nums.size(); i++) {
            res += nums[i] - nums[i - k];
            ans = max(ans, res);
        }
        return ans / k;
    }
};