class Solution {
public:
    int rob(vector<int>& nums) {
        int sum1 = 0;
        int sum2 = 0;
        for(int sum : nums){
            int curr = max(sum + sum2, sum1);
            sum2= sum1;
            sum1 = curr;
        }
        return sum1;
    }
};