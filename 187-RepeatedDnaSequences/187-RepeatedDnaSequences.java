// Last updated: 25/03/2026, 15:17:27

class Solution {
    public List<String> findRepeatedDnaSequences(String s) {
        int K = 10;
        if (s.length() <= K) {
            // AAAAAAAAA
            return new ArrayList<>();
        }
        // K = 10
        // AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT
        // AAAAACCCCC
        // CCCCCAAAAA
        Set<Integer> seen = new HashSet<>();
        Set<String> result = new HashSet<>();
        int rep = 0;
        // A -> 0
        // C -> 1
        // G -> 2
        // T -> 3
        Map<Character, Integer> map = new HashMap<>();
        map.put('A', 0);
        map.put('C', 1);
        map.put('G', 2);
        map.put('T', 3);
        // AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT
        // 0123456789
        // 9876543210
        // 44
        // A
        for (int i = 0; i < K; i = i + 1) {
            int pow = K - i - 1;
            rep = rep + (int) Math.pow(4, pow) * map.get(s.charAt(i));
        }
        seen.add(rep);
        //           
        //. AAAACCCCCA
        //                     50
        // AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT
        // 41...50
        // i - K => 50 - 10 = 40 + 1
        // 0123456789
        //                     i
        // 9876543210
        // 44
        // rep = 4^9 * 0 + ... + 4^0 * 1
        // rep 
        // T: O(n), S: O(n)
        for (int i = K; i < s.length(); i = i + 1) {
            rep = rep - ((int) Math.pow(4, K - 1) * map.get(s.charAt(i - K)));
            rep = 4 * rep;
            rep = rep + map.get(s.charAt(i));
            if (seen.contains(rep)) {
                result.add(s.substring(i - K + 1, i + 1));
            }
            seen.add(rep);
        }
        return new ArrayList<String>(result);
    }
}