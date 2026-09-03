class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int odd = 0, even = 0;

        for (int x : nums1) {
            if (x % 2 == 0)
                even++;
            else
                odd++;
        }

        // Already uniform
        if (odd == 0 || even == 0)
            return true;

        // Mixed parity: possible if the smallest element is odd
        int mn = *min_element(nums1.begin(), nums1.end());

        return mn % 2 == 1;
    }
};