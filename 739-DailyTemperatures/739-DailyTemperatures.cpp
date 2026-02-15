// Last updated: 2/15/2026, 10:30:12 PM
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector <int> st;
        vector <int> res(n,0);
        for (int i=0;i<n;i++){
            while (!st.empty() && temperatures[i]>temperatures[st.back()]){
                res[st.back()] = i-st.back();
                st.pop_back();
            }
            st.push_back(i);
        }
        return res;
    }
};