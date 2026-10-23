class Solution {
    public int rob(int[] nums) {
        int val1 = 0;
        int val2 = 0;
        for(int val : nums){
            int curr = Math.max(val + val2, val1);
            val2 = val1;
            val1=curr;
        }
        return val1;
    }
}