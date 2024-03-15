class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Start from the end of both arrays
        int i = m - 1; // Last element of nums1 that is part of the initial array
        int j = n - 1; // Last element of nums2
        int k = m + n - 1; // Last position in nums1
        
        // While there are elements to consider in nums2
        while (j >= 0) {
            // If nums1 is exhausted or nums2's current element is larger
            if (i < 0 || nums2[j] > nums1[i]) {
                nums1[k] = nums2[j];
                j--;
            } else {
                nums1[k] = nums1[i];
                i--;
            }
            k--;
        }
    }
};
