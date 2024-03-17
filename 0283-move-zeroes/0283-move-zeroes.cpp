// best solution 

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // jitne v non zero number hai unko ye left me shift kra rhe hai
        
        int i=0;
        for(int j=0; j<nums.size(); j++){
            if(nums[j] != 0){
                swap(nums[j], nums[i]);
                 i++;
            }
           
        }
        
    }
};




// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int n = nums.size();
//         for (int i = 0; i < n; i++) {
//             if (nums[i] == 0) {
//                 for (int j = i + 1; j < n; j++) {
//                     if (nums[j] != 0) {
//                         swap(nums[i], nums[j]);
//                         break;
//                     }
//                 }
//             }
//         }
//     }
// };