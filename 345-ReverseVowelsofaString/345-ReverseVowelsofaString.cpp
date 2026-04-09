// Last updated: 09/04/2026, 11:40:36
1class Solution {
2public:
3    string reverseVowels(string s) {
4        string word=s;
5        int start =0;
6        int end=s.length()-1;
7        string vowels="aeiouAEIOU";
8         while (start < end) {
9            if (vowels.find(s[start]) == string::npos) {
10                start++;}
11            
12            else if (vowels.find(s[end]) == string::npos) {
13                end--;
14            }
15            
16            else {
17                swap(s[start], s[end]);
18                start++;
19                end--;
20            }
21        }
22
23        return s;
24        
25    }
26};