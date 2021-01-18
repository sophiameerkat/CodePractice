#221. Maximal Square
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int dp[n+5][m+5];
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                dp[i][j] = 0;
        }
        
        for (int j = 0; j < m; j++)
            dp[0][j] = matrix[0][j] - '0';
        for (int i = 0; i < n; i++)
            dp[i][0] = matrix[i][0] - '0';
        
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (matrix[i][j] == '1')
                    dp[i][j] = min(min(dp[i-1][j], dp[i][j-1]), dp[i-1][j-1]) + 1;
            }
        }
        
        int maxValue = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (dp[i][j] > maxValue)
                    maxValue = dp[i][j];
            }
        }
        return maxValue*maxValue;
    }
};
