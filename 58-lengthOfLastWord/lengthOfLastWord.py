class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        if len(s) == 0:
            return 0
        count = 0
        for i in reversed(s):
            if i == ' ' and count == 0:
                continue
            if i == ' ' and count != 0:
                return count
            else:
                count += 1
        return count
