// Last updated: 15/06/2026, 09:20:08
1class Solution {
2public:
3    int mostWordsFound(vector<string>& sentences) {
4        int count=1;
5        int maxc=0;
6        for(int i=0;i<sentences.size();i++){
7            string sen=sentences[i];
8            count=1;
9
10            for(char ch:sen){
11                if(ch==' '){
12                    count++;
13                }
14
15                maxc=max(maxc,count);
16            }
17        }
18
19        return maxc;
20        
21    }
22};