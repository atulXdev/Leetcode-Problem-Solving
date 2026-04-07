// Last updated: 07/04/2026, 13:28:15
1class Solution {
2    public int strStr(String haystack, String needle) {
3         int m = needle.length();
4           int n = haystack.length();
5
6        for (int i = 0; i <= n - m; i++) {
7            int j = 0;
8
9            while (j < m && haystack.charAt(i + j) == needle.charAt(j)) {
10                j++;
11            }
12
13            if (j == m) return i; 
14        }
15
16        return -1; 
17    }
18        
19    }
20