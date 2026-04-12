// Last updated: 4/12/2026, 11:17:56 AM
1class Solution {
2public:
3   string maskPII(string s) {
4    if (isalpha(s[0])) { 
5        int at_pos = s.find('@');
6        string res = "";
7        res += tolower(s[0]);
8        res += "*****";
9        res += tolower(s[at_pos - 1]);
10        res += "@";
11        for (int i = at_pos + 1; i < s.length(); ++i) {
12            res += tolower(s[i]);
13        }
14        return res;
15    } else {
16        string d = "";
17        for (char c : s) if (isdigit(c)) d += c;
18        
19        string local = "***-***-" + d.substr(d.length() - 4);
20        int country = d.length() - 10;
21        
22        if (country == 0) return local;
23        return "+" + string(country, '*') + "-" + local;
24    }
25}
26};