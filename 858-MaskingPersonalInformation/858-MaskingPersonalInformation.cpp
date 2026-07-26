// Last updated: 7/26/2026, 4:22:01 PM
class Solution {
public:
   string maskPII(string s) {
    if (isalpha(s[0])) { 
        int at_pos = s.find('@');
        string res = "";
        res += tolower(s[0]);
        res += "*****";
        res += tolower(s[at_pos - 1]);
        res += "@";
        for (int i = at_pos + 1; i < s.length(); ++i) {
            res += tolower(s[i]);
        }
        return res;
    } else {
        string d = "";
        for (char c : s) if (isdigit(c)) d += c;
        
        string local = "***-***-" + d.substr(d.length() - 4);
        int country = d.length() - 10;
        
        if (country == 0) return local;
        return "+" + string(country, '*') + "-" + local;
    }
}
};