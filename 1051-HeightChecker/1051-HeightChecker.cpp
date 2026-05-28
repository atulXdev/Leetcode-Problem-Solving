// Last updated: 28/05/2026, 17:45:32
1class Solution {
2public:
3    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
4        string ans1="";
5        string ans2="";
6
7       for(int i=0;i<word1.size();i++){
8        ans1+=word1[i];
9       }
10
11       for(int i=0;i<word2.size();i++){
12        ans2+=word2[i];
13       }
14       
15
16        return ans1==ans2;
17        
18    }
19};