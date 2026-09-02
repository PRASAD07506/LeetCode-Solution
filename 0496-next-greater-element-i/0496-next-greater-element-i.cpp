class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>arr1;
        for(int i = 0;i<nums1.size();i++){
            int n = -1;
            for(int j = 0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                for(int k = j+1;k<nums2.size();k++){
                    if(nums2[k] > nums2[j]) {
                        n=nums2[k];
                        break;
                    }
                }
                break;
            }
           
            }
            arr1.push_back(n);
        }
        return arr1;
    }
};