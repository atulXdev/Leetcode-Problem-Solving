// Last updated: 29/05/2026, 00:24:42
1class Solution {
2public:
3    int heightChecker(vector<int>& heights) {
4
5        vector<int> normal(heights.begin(),heights.end());
6        sort(heights.begin(),heights.end());
7        int count=0;
8
9        for(int i=0;i<normal.size();i++){
10            if(heights[i]!=normal[i]){
11                count++;
12            }
13
14        }
15
16        return count;
17        
18    }
19};