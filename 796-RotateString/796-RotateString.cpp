// Last updated: 4/18/2026, 2:54:30 PM
1class Solution {
2public:
3    int repeatedStringMatch(string a, string b) {
4        string source = "";
5        int count = 0;
6        
7        while (source.length() < b.length()) {
8            source += a;
9            count++;
10        }
11        
12        if (source.find(b) != string::npos) {
13            return count;
14        }
15        
16        source += a;
17        count++;
18        
19        if (source.find(b) != string::npos) {
20            return count;
21        }
22        
23        return -1;
24    }
25};