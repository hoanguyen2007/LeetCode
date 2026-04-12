// Last updated: 4/12/2026, 12:02:00 PM
1class Solution {
2public:
3    bool repeatedSubstringPattern(string s) {
4    string doubled = s + s;
5    return doubled.substr(1, doubled.length() - 2).find(s) != string::npos;
6}
7};