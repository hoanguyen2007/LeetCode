// Last updated: 7/26/2026, 4:22:11 PM
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
    string doubled = s + s;
    return doubled.substr(1, doubled.length() - 2).find(s) != string::npos;
}
};