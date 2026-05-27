// Last updated: 27/05/2026, 21:46:11
1class Solution {
2public:
3    bool checkInclusion(string s1, string s2) {
4        if(s1.size()>s2.size()){
5            return false;
6        }
7
8        vector<int> count1(26,0);
9        vector<int> count2(26,0);
10
11     for(char ch:s1){
12        count1[ch-'a']++;
13     }
14     //window size
15     int k=s1.size();
16
17     for(int i=0;i<s2.size();i++){
18//adding current char to window
19  count2[s2[i]-'a']++;
20
21//making sure window have desired length
22        if(i>=k){
23           count2[s2[i-k]-'a']--;
24        }
25        if(count1==count2){
26            return true;
27        }
28     }
29
30     return false;
31    }
32};