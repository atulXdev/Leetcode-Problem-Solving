// Last updated: 20/05/2026, 23:09:45
1class Solution {
2public:
3    bool rotateString(string s, string goal) {
4
5        if(s.size()!=goal.size()){
6            return false;
7        }
8
9        for(int i=0;i<s.size();i++){
10            if(s==goal){
11                return true;
12                break;
13            }
14
15            char first=s[0];
16            s.erase(0,1);
17            s.push_back(first);
18        }
19
20        return false;
21        
22    }
23};