"""

    Valid Palindrome

    A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
    Given a string s, return true if it is a palindrome, or false otherwise.

"""

class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower().split(" ")
        s = "".join(s)
        stack = []
        
        for i in range(len(s)):
            if not (s[i].isalpha() or s[i].isnumeric()):
                continue
            stack.append(s[i])

        for i in range(len(s)):
            if not (s[i].isalpha() or s[i].isnumeric()):
                continue
            if stack.pop() != s[i]:
                return False
        
        return True