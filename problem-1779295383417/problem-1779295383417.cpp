// Last updated: 20/05/2026, 22:13:03
1class Solution {
2public:
3    bool rotateString(string s, string goal) {
4
5        for(int i=0;i<s.size();i++){
6            if(s==goal){
7                return true;
8                break;
9            }
10
11            char first=s[0];
12            s.erase(0,1);
13            s.push_back(first);
14
15        }
16
17        return false;
18        
19    }
20};