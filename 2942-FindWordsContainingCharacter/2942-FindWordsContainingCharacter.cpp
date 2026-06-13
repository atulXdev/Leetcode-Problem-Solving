// Last updated: 13/06/2026, 10:14:46
1class Solution {
2public:
3    vector<int> findWordsContaining(vector<string>& words, char x) {
4        vector<int> ans;
5
6        for(int i=0;i<words.size();i++){
7            for(int j=0;j<words[i].size();j++){
8                if(words[i][j]==x){
9                    ans.push_back(i);
10                    break;
11                }
12            }
13        }
14
15        return ans;
16        
17    }
18};