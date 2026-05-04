// Last updated: 04/05/2026, 23:31:57
class Solution {
public:
    string reverseVowels(string s) {
        string word=s;
        int start =0;
        int end=s.length()-1;
        string vowels="aeiouAEIOU";
         while (start < end) {
            if (vowels.find(s[start]) == string::npos) {
                start++;}
            
            else if (vowels.find(s[end]) == string::npos) {
                end--;
            }
            
            else {
                swap(s[start], s[end]);
                start++;
                end--;
            }
        }

        return s;
        
    }
};