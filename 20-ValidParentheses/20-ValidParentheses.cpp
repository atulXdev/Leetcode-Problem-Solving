// Last updated: 25/05/2026, 10:03:53
1class Solution {
2public:
3    string addBinary(string a, string b) {
4        string ans="";
5        int i=a.size()-1;
6        int j=b.size()-1;
7        int carry=0;
8
9        while(i>=0 || j>=0 || carry){
10            int sum=carry;
11
12            if(i>=0){
13                sum+=a[i--]-'0';
14            }
15
16            if(j>=0){
17                sum+=b[j--]-'0';
18            }
19
20            ans+=(sum%2)+'0';
21            carry=sum/2;
22        }
23
24        reverse(ans.begin(),ans.end());
25        return ans;
26        
27    }
28};