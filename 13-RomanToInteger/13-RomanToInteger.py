# Last updated: 2/2/2026, 11:18:23 PM
class Solution:
    def romanToInt(self, s: str) -> int:
        res = 0
        
        roms = {"I":1,"V":5,"X":10,"L":50,"C":100,"D":500,"M":1000}
        s = s.replace("IV", "IIII").replace("IX", "VIIII").replace("XL", "XXXX").replace("XC", "LXXXX").replace("CD", "CCCC").replace("CM", "DCCCC")
        for x in range(0,len(s)):
                res += roms[s[x]]
        return res