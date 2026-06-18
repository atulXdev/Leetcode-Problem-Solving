// Last updated: 18/06/2026, 22:06:53
1class Solution {
2public:
3    int hammingWeight(int n) {
4        int count = 0;
5
6        while (n) {
7            count += (n & 1);
8            n >>= 1;
9        }
10
11        return count;
12    }
13};