// Last updated: 04/05/2026, 23:31:47
class Solution {
public:
    string reverseOnlyLetters(string s) {
         int i = 0;
        int j = s.length() - 1;

        while (i < j) {
            if (!isalpha(s[i])) {
                i++;
            }
            else if (!isalpha(s[j])) {
                j--;
            }
            else {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
return s;
        
    }
};