// Last updated: 17/06/2026, 09:46:29
1class Solution {
2public:
3    int balancedStringSplit(string s) {
4        
5        int count=0;
6        int ans=0;
7
8        for(int i=0;i<s.size();i++){
9            if(s[i]=='R'){
10                count++;
11            }
12
13            else if(s[i]=='L'){
14                count--;
15            }
16
17            if(count==0){
18                ans++;
19            }
20        }
21
22        return ans;
23    }
24};