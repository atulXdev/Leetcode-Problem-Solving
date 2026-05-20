// Last updated: 20/05/2026, 23:30:37
1class Solution {
2public:
3    vector<string> fizzBuzz(int n) {
4
5        vector<string> ans;
6
7        for(int i=1;i<=n;i++){
8            if(i%3==0 && i%5==0){
9                ans.push_back("FizzBuzz");
10            }
11
12            else if(i%3==0){
13                ans.push_back("Fizz");
14            }
15
16            else if(i%5==0){
17                ans.push_back("Buzz");
18            }
19
20            else{
21                ans.push_back(to_string(i));
22            }
23
24        }
25
26        return ans;
27        
28    }
29};