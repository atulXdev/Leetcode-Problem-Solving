// Last updated: 28/05/2026, 17:26:04
1class Solution {
2public:
3    int heightChecker(vector<int>& heights) {
4
5        vector<int> normal(heights.begin(),heights.end());
6        
7        sort(heights.begin(),heights.end());
8        int count=0;
9
10        for(int i=0;i<heights.size();i++){
11            if(normal[i]!=heights[i]){
12                count++;
13            }
14        }
15
16        return count;
17    }
18};