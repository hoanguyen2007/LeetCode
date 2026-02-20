// Last updated: 2/20/2026, 8:33:57 PM
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int total_time = 0;
        int tickets_k = tickets[k];
        
        for (int i = 0; i < tickets.size(); i++) {
            if (i <= k) {
                total_time += min(tickets[i], tickets_k);
            } else {
                total_time += min(tickets[i], tickets_k - 1);
            }
        }
        
        return total_time;
    }
};