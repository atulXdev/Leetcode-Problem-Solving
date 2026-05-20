// Last updated: 20/05/2026, 23:04:22
1class Solution {
2public:
3    bool rotateString(string s, string goal) {
4        if(s.size()!=goal.size()){
5            return false;
6        }
7
8
9        for(int i=0;i<s.size();i++){
10            if(s==goal){
11                return true;
12                break;
13            }
14            char first=s[0];
15            s.erase(0,1);
16            s.push_back(first);
17
18        }
19
20        return false;
21        
22    }
23};