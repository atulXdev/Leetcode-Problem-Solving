// Last updated: 25/03/2026, 15:16:50
class Solution {
    public int appendCharacters(String s, String t) {
        int i=0;
        int j=0;
while(i<s.length() && j<t.length()){
    if(s.charAt(i)==t.charAt(j)){
        i=i+1;
        j=j+1;
    }
    else{
        i=i+1;
    }
}
return t.length()-j;
        
    }
}