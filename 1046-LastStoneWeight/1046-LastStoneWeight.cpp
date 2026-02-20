// Last updated: 2/20/2026, 9:49:13 PM
1struct Node{
2    int sum;
3    int i;
4    int j;
5    bool operator>(const Node& other)const{
6        return sum > other.sum;
7    }
8};
9class Solution {
10    
11public:
12    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
13        vector<vector<int>> res;
14        int n=nums1.size();
15        int m=nums2.size();
16        if (m==0||n==0||k==0) return res;
17        priority_queue<Node, vector<Node>, greater<Node>> pq;
18        for (int i=0;i<n;++i){
19            pq.push({nums1[i]+nums2[0], i, 0});
20        }
21        while (k>0 && !pq.empty()){
22            Node curr = pq.top();
23            pq.pop();
24            res.push_back({nums1[curr.i], nums2[curr.j]});
25            k--;
26            if (curr.j+1<m){
27                pq.push({nums1[curr.i] + nums2[curr.j + 1], curr.i, curr.j + 1});
28            }
29        }
30        return res;
31    }
32};