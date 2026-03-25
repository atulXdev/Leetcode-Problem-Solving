// Last updated: 25/03/2026, 15:17:25
class Solution {
    private int sumOfDig(int n) {
        int sum = 0;
        while (n > 0) {
            int d = n % 10;
            sum += d * d;
            n /= 10;
        }
        return sum;
    }

    public boolean isHappy(int n) {
        int slow = n;
        int fast = sumOfDig(n); // Move fast one step ahead initially

        while (fast != 1 && slow != fast) {
            slow = sumOfDig(slow);
            fast = sumOfDig(sumOfDig(fast));
        }

        return fast == 1;
    }
}