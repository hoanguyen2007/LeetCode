// Last updated: 6/22/2026, 4:26:52 PM
1class Solution {
2public:
3    bool isPalindrome(int x) {
4        if (x < 0 || (x % 10 == 0 && x != 0)) {
5            return false;
6        }
7
8        int reversedHalf = 0;
9
10        while (x > reversedHalf) {
11            reversedHalf = reversedHalf * 10 + x % 10;
12            x /= 10;
13        }
14        return x == reversedHalf || x == reversedHalf / 10;
15    }
16};