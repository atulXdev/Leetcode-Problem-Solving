// Last updated: 11/05/2026, 12:14:00
1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        int l1=s.size();
5        int l2=t.size();
6        map<char,int> m1;
7        map<char,int> m2;
8
9        if(l1==l2){
10            for(int i=0;i<l1;i++){
11                m1[s[i]]++;
12                m2[t[i]]++;
13
14            }
15
16            if(m1==m2){
17                return true;
18            }
19
20            else{
21                return false;
22            }
23           
24        }
25
26            return false;
27        
28    }
29};