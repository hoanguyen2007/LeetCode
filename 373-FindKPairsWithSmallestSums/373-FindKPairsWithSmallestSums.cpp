// Last updated: 2/22/2026, 3:10:12 PM
struct Node{
    int sum;
    int i;
    int j;
    bool operator>(const Node& other)const{
        return sum > other.sum;
    }
};
class Solution {
    
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> res;
        int n=nums1.size();
        int m=nums2.size();
        if (m==0||n==0||k==0) return res;
        priority_queue<Node, vector<Node>, greater<Node>> pq;
        for (int i=0;i<n;++i){
            pq.push({nums1[i]+nums2[0], i, 0});
        }
        while (k>0 && !pq.empty()){
            Node curr = pq.top();
            pq.pop();
            res.push_back({nums1[curr.i], nums2[curr.j]});
            k--;
            if (curr.j+1<m){
                pq.push({nums1[curr.i] + nums2[curr.j + 1], curr.i, curr.j + 1});
            }
        }
        return res;
    }
};