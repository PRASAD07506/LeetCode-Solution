class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 1);
        
        // Pass 1: Calculate all the Left products
        // result[i] will contain the product of all elements to the left of i
        int leftProduct = 1;
        for (int i = 0; i < n; i++) {
            result[i] = leftProduct;
            leftProduct *= nums[i];
        }
        
        // Pass 2: Calculate the Right products and multiply them with the Left products
        int rightProduct = 1;
        for (int i = n - 1; i >= 0; i--) {
            // result[i] currently holds the left product. 
            // We multiply it by the right product to get the final answer.
            result[i] *= rightProduct;
            rightProduct *= nums[i];
        }
        
        return result;
    }
};