class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: int
        """
        freq = {}

        # Count frequency
        for ch in s:
            freq[ch] = freq.get(ch, 0) + 1

        length = 0
        hasOdd = False

        for count in freq.values():
            length += (count // 2) * 2

            if count % 2 == 1:
                hasOdd = True

        if hasOdd:
            length += 1

        return length