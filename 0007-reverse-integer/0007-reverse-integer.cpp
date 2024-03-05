class Solution {
public:
    int reverse(int n) {
        long long revNum = 0;
        while (n != 0) {
            int lastNo = n % 10;
            revNum = revNum * 10 + lastNo;
            n = n / 10;
        }
        if (revNum > INT_MAX || revNum < INT_MIN)
            return 0;
        return revNum;
    }
};
