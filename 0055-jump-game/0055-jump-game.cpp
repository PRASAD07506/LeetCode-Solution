class Solution {
public:
    bool canJump(vector<int>& nums) {
        int steps = 0;
        for(int i = 0;i<nums.size();i++){
            if(i>steps) return false;
            steps = max(steps,i + nums[i]);
        }
        return true;
    } 
};