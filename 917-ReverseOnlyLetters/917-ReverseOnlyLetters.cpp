// Last updated: 09/04/2026, 12:10:34
1class Solution {
2public:
3    string reverseOnlyLetters(string s) {
4         int i = 0;
5        int j = s.length() - 1;
6
7        while (i < j) {
8            if (!isalpha(s[i])) {
9                i++;
10            }
11            else if (!isalpha(s[j])) {
12                j--;
13            }
14            else {
15                swap(s[i], s[j]);
16                i++;
17                j--;
18            }
19        }
20return s;
21        
22    }
23};