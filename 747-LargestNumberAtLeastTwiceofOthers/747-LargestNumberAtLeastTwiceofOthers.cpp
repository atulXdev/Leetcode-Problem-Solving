// Last updated: 12/06/2026, 23:57:37
1class Solution {
2public:
3    vector<string> findRelativeRanks(vector<int>& score) {
4
5        vector<int> real(score.begin(),score.end());
6        vector<string> ans;
7        sort(score.begin(),score.end(), greater<int>());
8        map<int,string> mp;
9       for(int i=0;i<score.size();i++){
10        if(i==0){
11            mp[score[i]]="Gold Medal";
12        }
13
14      else  if(i==1){
15            mp[score[i]]="Silver Medal";
16        }
17
18       else  if(i==2){
19            mp[score[i]]="Bronze Medal";
20        }
21        else{
22            
23            mp[score[i]]=to_string(i+1);
24       } }
25
26       for(int n:real){
27        ans.push_back(mp[n]);
28       }
29
30       return ans;
31        
32    }
33};