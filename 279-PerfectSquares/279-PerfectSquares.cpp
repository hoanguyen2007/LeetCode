// Last updated: 5/21/2026, 5:30:57 PM
1class Solution {
2public:
3    int numSquares(int n) {
4        std::vector<int> arr(n + 1, 10000); 
5        arr[0] = 0;
6        for (int i=1;i<=n;i++){
7            for (int j=1;j*j<=i;j++){
8                arr[i] = min(arr[i],arr[i-j*j]+1); 
9            }
10        }
11        return arr[n];
12    }
13};