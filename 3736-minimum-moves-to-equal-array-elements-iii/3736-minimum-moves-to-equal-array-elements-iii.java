class Solution {
    public int minMoves(int[] nums) {
        int count = 0;
        Arrays.sort(nums);
        for(int i = 0;i<nums.length;i++){
            count = count + (nums[nums.length- 1] - nums[i]);
        }
        return count;
    }
}