// Last updated: 20/05/2026, 23:20:14
1class Solution {
2public:
3    string largestOddNumber(string num) {
4
5        int n=num.size();
6
7        for(int i=n-1;i>=0;i--){
8            int lastN=num[i]-'0';
9            if(lastN%2==0){
10                num.pop_back();
11            }
12            else{
13                return num;
14            }
15        }
16
17        return "";
18        
19    }
20};