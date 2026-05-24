// Last updated: 24/05/2026, 23:18:29
1class Solution {
2public:
3    string mergeAlternately(string word1, string word2) {
4
5        int mini=min(word1.size(),word2.size());
6
7        string ans="";
8
9        for(int i=0;i<mini;i++){
10               ans+=word1[i];
11            ans+=word2[i];
12            
13            if(i==mini-1 && word1.size()!=mini){
14                for(int j=mini;j<word1.size();j++){
15                    ans+=word1[j];
16                }
17            }
18
19              if(i==mini-1 && word2.size()!=mini){
20                for(int j=mini;j<word2.size();j++){
21                    ans+=word2[j];
22                }
23            }
24         
25        }
26
27        return ans;
28
29        
30    }
31};