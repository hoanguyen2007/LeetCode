# Last updated: 2/2/2026, 11:18:25 PM
class Solution:
    def isPalindrome(self, x: int) -> bool:
        if str(x) == str(x)[x::-1]:
            return True
        else:
            return False