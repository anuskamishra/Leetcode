class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
        int ans = 0;
        for(int i=m-1; i>=0; i--){
            for(int j=n-1; j>=0; j--){
                if(matrix[i][j]){
                    dp[i][j] = 1 + std::min(std::min(dp[i][j+1], dp[i+1][j]), dp[i+1][j+1]);
                    ans += dp[i][j];
                }
            }
        }
        return ans;
    }
};