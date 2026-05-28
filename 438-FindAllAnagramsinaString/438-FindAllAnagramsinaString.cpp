// Last updated: 29/05/2026, 00:17:15
1class Solution {
2public:
3    vector<int> findAnagrams(string s, string p) {
4        int k=p.size();
5        int left=0;
6        vector<int> ans;
7
8        vector<int> freqp(26,0);
9        vector<int> freqs(26,0);
10
11        for(int i=0;i<k;i++){
12            freqp[p[i]-'a']++;
13        }
14
15        for(int right=0;right<s.size();right++){
16            freqs[s[right]-'a']++;
17
18            if(right-left+1>k){
19                freqs[s[left]-'a']--;
20                left++;
21            }
22
23            if(right-left+1==k && freqs==freqp){
24                ans.push_back(left);
25            }
26        }
27
28        return ans;
29        
30    }
31};