// Last updated: 25/03/2026, 15:17:54
class Solution {
    public boolean isPalindrome(int x) {
        // Negative numbers and numbers ending in 0 (but not 0 itself) can't be palindromes
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversed = 0;
        while (x > reversed) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x /= 10;
        }

        // For even length: x == reversed
        // For odd length: x == reversed / 10
        return x == reversed || x == reversed / 10;
    }
}
