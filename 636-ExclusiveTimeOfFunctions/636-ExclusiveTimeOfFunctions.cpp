// Last updated: 2/15/2026, 10:30:14 PM
#include <vector>
#include <string>
#include <stack>
class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector <int> ans(n,0);
        stack <int> st;
        int prevTime=0;
        for (const string &log:logs){
            int first_colon = log.find(':');
            int second_colon = log.find_last_of(':');
            int id = stoi(log.substr(0,first_colon));
            string type = log.substr(first_colon+1,second_colon-first_colon-1);
            int timestamp = stoi(log.substr(second_colon+1));
            if (type == "start"){
                if (!st.empty()){
                    ans[st.top()] += timestamp-prevTime;
                }
                st.push(id);
                prevTime= timestamp;
            }
            else{
                ans[st.top()] += timestamp-prevTime+1;
                st.pop();
                prevTime=timestamp+1;
            }
        }
        return ans;
    }
};