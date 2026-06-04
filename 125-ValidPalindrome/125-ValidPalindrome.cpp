// Last updated: 04/06/2026, 17:10:25
1class Solution {
2public:
3    bool isPalindrome(string s) {
4        int left=0;
5        int right=s.size()-1;
6        while(left<right){
7            char leftChar=tolower(s[left]);
8            char rightChar=tolower(s[right]);
9
10            if(!isalnum(leftChar)){
11                left++;
12            }
13
14           else if(!isalnum(rightChar)){
15                right--;
16            }
17            else{
18                if(leftChar!=rightChar) return false;
19                left++;
20                right--;
21            }
22        }
23
24        return true;
25
26        
27    }
28};