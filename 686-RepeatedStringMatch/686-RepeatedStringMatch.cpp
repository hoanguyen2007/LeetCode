// Last updated: 7/26/2026, 4:22:03 PM
class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string source = "";
        int count = 0;
        
        while (source.length() < b.length()) {
            source += a;
            count++;
        }
        
        if (source.find(b) != string::npos) {
            return count;
        }
        
        source += a;
        count++;
        
        if (source.find(b) != string::npos) {
            return count;
        }
        
        return -1;
    }
};