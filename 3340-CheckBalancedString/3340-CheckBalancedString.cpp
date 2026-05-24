// Last updated: 24/05/2026, 22:14:33
1class Solution {
2public:
3    bool isBalanced(string num) {
4        int evenS=0;
5        int oddS=0;
6
7        for(int i=0;i<num.size();i++){
8            int n=num[i]-'0';
9
10            if(i%2==0){
11                evenS+=n;
12            }
13
14            else{
15                oddS+=n;
16
17            }
18
19        }
20        return evenS==oddS;
21    }
22};