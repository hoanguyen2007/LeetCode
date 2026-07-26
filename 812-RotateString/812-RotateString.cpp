// Last updated: 7/26/2026, 4:22:00 PM
class Solution {
public:
    bool rotateString(string s, string goal) {
        int initial = goal.length();
        goal+= goal;
        if (initial==s.length()){
        if (goal.find(s)==string::npos || goal.find(s)>initial){
            return false;
        }
        return true;}
        else return false;
    }
};