// Last updated: 15/05/2026, 20:12:26
1class Solution {
2public:
3
4    bool isHappy(int n) {
5
6        unordered_set<int> st;
7         while(n!=1 && !st.count(n)){
8            st.insert(n);
9            int sum=0;
10            while(n>0){
11                int last=n%10;
12                sum+=last*last;
13                n=n/10;
14            }
15            n=sum;
16
17           
18         }
19
20          return n==1;
21       
22        
23    }
24};