// Last updated: 2/20/2026, 8:34:00 PM
#include <algorithm>
#include <vector>

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        make_heap(stones.begin(), stones.end());

        while (stones.size() > 1) {
            int val1 = stones[0];
            pop_heap(stones.begin(), stones.end());
            stones.pop_back();

            int val2 = stones[0];
            pop_heap(stones.begin(), stones.end());
            stones.pop_back();

            if (val1 != val2) {
                stones.push_back(val1 - val2);
                push_heap(stones.begin(), stones.end());
            }
        }
        
        return stones.empty() ? 0 : stones[0];
    }
};