// Last updated: 16/06/2026, 15:25:12
1class Solution {
2public:
3    int compareVersion(string version1, string version2) {
4        int i=0,j=0;
5        int n=version1.size();
6        int m=version2.size();
7        while(i<n || j<m){
8            long long num1=0;
9            long long num2=0;
10
11            while(i<n && version1[i]!='.'){
12                num1+=num1*10+(version1[i]-'0');
13                i++;
14            }
15
16            while(j<m && version2[j]!='.'){
17                num2+=num2*10+(version2[j]-'0');
18                j++;
19            }
20
21            if(num1>num2) return 1;
22            if(num2>num1) return -1;
23//skip if '.' is encountered
24            i++;
25            j++;
26        }
27
28        return 0;
29        
30    }
31};