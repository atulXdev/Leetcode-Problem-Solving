// Last updated: 15/06/2026, 09:57:34
1class Solution {
2public:
3    int countSegments(string s) {
4        vector<string> res;
5        string temp = "";
6
7        for(int i=0; i<s.size(); i++){
8            if(s[i] != ' '){
9                temp += s[i];
10            }
11            if(s[i] == ' ' || i == s.size()-1){
12                if(temp != ""){
13                    res.push_back(temp);
14                    temp = "";
15                }
16            }
17        }
18        return res.size();
19    }
20};