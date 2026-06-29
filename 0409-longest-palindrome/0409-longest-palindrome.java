class Solution {
    public int longestPalindrome(String s) {

        HashMap<Character, Integer> map = new HashMap<>();

        // Count frequency of each character
        for (char ch : s.toCharArray()) {
            map.put(ch, map.getOrDefault(ch, 0) + 1);
        }

        int length = 0;
        boolean hasOdd = false;

        // Calculate longest palindrome length
        for (int count : map.values()) {

            if (count % 2 == 0) {
                length += count;
            } else {
                length += count - 1; // Use even part
                hasOdd = true;
            }
        }

        // Add one odd character in the center
        if (hasOdd) {
            length++;
        }

        return length;
    }
}