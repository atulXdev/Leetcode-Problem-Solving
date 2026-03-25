// Last updated: 25/03/2026, 15:17:55
class Solution {
    public int lengthOfLongestSubstring(String s) {
        int i=0;
        int j=0;
        int max=0;
        Set<Character> set= new HashSet<>();
        while(j<s.length()){
            char c=s.charAt(j);

            while(set.contains(c)){
                set.remove(s.charAt(i));
                i=i+1;
            }

            set.add(s.charAt(j));
            max=Math.max(max,j-i+1);


            j=j+1;
        }

        return max;

        
    }
}