// Last updated: 2/2/2026, 11:18:03 PM
class Solution {
public:
    long long combinations_iterative(int n, int k) {
    if (k < 0 || k > n) {
        return 0;
    }
    if (k == 0 || k == n) {
        return 1;
    }
    if (k > n / 2) {
        k = n - k;
    }
    long long res = 1;
    for (int i = 1; i <= k; ++i) {
        res = res * (n - i + 1) / i;
    }
    return res;
}
    int climbStairs(int n) {
        int result = 0;
        for (int i=n;i>=(n/2);i--) 
        {
            result += combinations_iterative(i,(n-i));
        }
        return result;
    }
};