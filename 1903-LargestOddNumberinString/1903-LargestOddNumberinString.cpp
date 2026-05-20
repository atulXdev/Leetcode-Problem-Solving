// Last updated: 20/05/2026, 22:29:12
1class Solution {
2public:
3    string largestOddNumber(string num) {
4
5 int n=num.size();
6 for(int i=n-1;i>=0;i--){
7    int lastN=num[i]-'0';
8    if(lastN%2==0){
9        num.pop_back();
10    }
11    else{
12        return num;
13    }
14 }
15
16 return "";       
17    }
18};