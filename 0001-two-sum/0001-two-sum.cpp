class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //     unordered_map<int, int> num_map;
    //     int n = nums.size();

    //     for (int i = 0; i < n; i++) {
    //         int complement = target - nums[i];
    //         if (num_map.count(complement)) {
    //             return {num_map[complement], i};
    //         }
    //         num_map[nums[i]] = i;
    //     }

    //     return {}; // Not reachable
    // }
    for(int i =0;i<nums.size();i++){
        for(int j=i+1; j<nums.size();j++){
            if(nums[i] + nums[j]== target){
                return { i, j};
            }
        }
    }
    return {};
    }
};