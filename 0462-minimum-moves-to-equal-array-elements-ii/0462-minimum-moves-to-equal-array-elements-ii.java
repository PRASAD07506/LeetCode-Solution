import java.util.Arrays;

class Solution {
    public int minMoves2(int[] nums) {

        Arrays.sort(nums);

        int mid = nums[nums.length / 2];

        long count = 0;

        for (int num : nums) {
            count += Math.abs((long) num - mid);
        }

        return (int) count;
    }
}