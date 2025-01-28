class Solution {
public:
    int addDigits(int num) {
        while (num > 9) { // in this case when number goes into two degit tb  ushe add kr k ans me dalo do k liye ye case hai
            int rem;
            int ans = 0;
            while (num != 0) {
                rem = num % 10;
                num = num / 10;
                ans = ans + rem;
            }
            num = ans;
        }
        return num;
    }
};