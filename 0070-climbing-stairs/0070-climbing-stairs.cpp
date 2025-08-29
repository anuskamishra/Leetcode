class Solution {
public:
    int solve(int i, vector<int> &dp){
        if(i==0 || i==1) return 1;
        if(dp[i] != -1) return dp[i];
        int ones = solve(i-1, dp);
        int twos = solve(i-2, dp); 
        dp[i] = ones + twos;
        return dp[i];
    }
    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        return solve(n, dp);
    }
};