class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int pivot = 0;
        
        // Finding the pivot index
        for (int i = 1; i < n; ++i) {
            if (nums[i] < nums[i - 1]) {
                pivot = i;
                break;
            }
        }
        
        // Check if the array is sorted and rotated
        for (int i = 0; i < n - 1; ++i) {
            int next = (pivot + i) % n;
            if (nums[next] > nums[(next + 1) % n])
                return false;
        }
        
        return true;
    }
};

// for soted only 
// class Solution {
// public:
//     bool check(vector<int>& arr, int n) {
//         if (arr.empty()) {
//             return false;
//         }

//         for(int i = 1; i < n; i++){
//             if(arr[i] <= arr[i - 1]){
//                 return false;
//             }
//         }
//         return true;
//     }
// };
