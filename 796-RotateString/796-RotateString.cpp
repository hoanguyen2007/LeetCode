// Last updated: 4/18/2026, 2:33:29 PM
1class Solution {
2public:
3    bool rotateString(string s, string goal) {
4        int initial = goal.length();
5        goal+= goal;
6        if (initial==s.length()){
7        if (goal.find(s)==string::npos || goal.find(s)>initial){
8            return false;
9        }
10        return true;}
11        else return false;
12    }
13};