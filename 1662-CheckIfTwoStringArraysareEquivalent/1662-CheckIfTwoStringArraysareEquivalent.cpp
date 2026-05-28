// Last updated: 29/05/2026, 00:32:09
1class Solution {
2public:
3    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
4        string ans1="";
5        string ans2="";
6
7        for(int i=0;i<word1.size();i++){
8            ans1+=word1[i];
9        }
10
11        for(int j=0;j<word2.size();j++){
12            ans2+=word2[j];
13        }
14        
15        return ans1==ans2;
16    }
17};