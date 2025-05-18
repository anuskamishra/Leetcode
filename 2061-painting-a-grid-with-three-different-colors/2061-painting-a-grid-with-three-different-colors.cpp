class Solution {
public:
    int MOD = 1e9 + 7;
    vector<string> columnGrids;
    vector<vector<int>> dp;

    void fillColumnGrids(int colLen, string currStr) {
        if (colLen == currStr.size()) {
            columnGrids.push_back(currStr);
        } else {
            for (auto color : {'R', 'G', 'B'}) {
                if (currStr.size() == 0 || color != currStr[currStr.size() - 1])
                    fillColumnGrids(colLen, currStr + color);
            }
        }
    }

    int solve(int remainCols, int prevGridIdx) {
        if (remainCols == 0)
            return 1;

        if (dp[remainCols][prevGridIdx] != -1)
            return dp[remainCols][prevGridIdx];

        int ways = 0;
        string prevGrid = columnGrids[prevGridIdx];

        for (int i = 0; i < columnGrids.size(); i++) {
            bool valid = true;
            string currGrid = columnGrids[i];
            for (int j = 0; j < currGrid.size(); j++) {
                if (currGrid[j] == prevGrid[j]) {
                    valid = false;
                    break;
                }
            }
            if (valid) {
                ways = (ways + solve(remainCols - 1, i)) % MOD;
            }
        }

        return dp[remainCols][prevGridIdx] = ways;
    }

    int colorTheGrid(int m, int n) {
        fillColumnGrids(m, "");
        int totalGrids = columnGrids.size();
        dp = vector<vector<int>>(n + 1, vector<int>(totalGrids + 1, -1));

        int totalWays = 0;
        for (int i = 0; i < columnGrids.size(); i++)
            totalWays = (totalWays + solve(n - 1, i)) % MOD;
        return totalWays;
    }
};