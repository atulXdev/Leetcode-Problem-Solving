// Last updated: 24/05/2026, 22:49:18
1class Solution {
2public:
3    int sumsq(int x) {
4        int sum = 0;
5
6        while (x > 0) {
7            int last = x % 10;
8            sum += last * last;
9            x /= 10;
10        }
11
12        return sum;
13    }
14
15    bool isHappy(int n) {
16        unordered_set<int> st;
17
18        while (n != 1) {
19            if (st.count(n)) {
20                return false;
21            }
22
23            st.insert(n);
24            n = sumsq(n);
25        }
26
27        return true;
28    }
29};