class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int sz = nums.size();
        vector<int> new_arr1(sz + 1);

        for(int i = 1; ; i++) {
            int multiple = i * k;

            bool found = false;

            for(int j = 0; j < sz; j++) {
                if(multiple == nums[j]) {
                    found = true;
                    break;
                }
            }

            if(found == false) {
                return multiple;
            }
        }

        return -1;
    }
};