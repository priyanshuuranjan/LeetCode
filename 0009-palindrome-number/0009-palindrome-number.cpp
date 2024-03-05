class Solution {
public:
    bool isPalindrome(int n) {
        // Special case: negative numbers are not palindromes
        if (n < 0)
            return false;

        int duplicate = n;
        long long revNum = 0;
        while (n != 0) {
            int lastNum = n % 10;
            revNum = revNum * 10 + lastNum;
            n = n / 10;
        }
        return duplicate == revNum;
    }
};
