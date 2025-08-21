class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size(), res = 0;
        vector<int> h(n, 0);
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j)
                h[j] = mat[i][j] ? h[j] + 1 : 0;
            for (int j = 0; j < n; ++j) {
                int mn = INT_MAX;
                for (int k = j; k >= 0 && h[k] > 0; --k) {
                    mn = min(mn, h[k]);
                    res += mn;
                }
            }
        }
        return res;
    }
};