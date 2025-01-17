class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        long long temp = x;
        long long rev = 0;
        
        while (temp != 0) {
            long long rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }
        
        return rev == x;
    }
};
