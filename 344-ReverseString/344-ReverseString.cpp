// Last updated: 09/04/2026, 11:04:32
1class Solution {
2public:
3    void reverseString(vector<char>& s) {
4        int n=s.size()-1;
5
6        for(int i=0;i<=n;i++ ){
7            int temp=s[i];
8            s[i]=s[n];
9            s[n]=temp;
10
11            n--;
12        }
13
14       
15        
16    }
17};