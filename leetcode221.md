tags: DP  
Idea: Use another array dp to indicate the size of square containing only 1s. dp[i][j] shows the number of 1s in the square with (i, j) on the rightmost and bottommost of the square. The trasition function is dp[i][j] = min(dp[i-1][j], dp[i][j-1], dp[i-1][j-1])+1. The values in dp are initialized to 0, dp[i][0] and dp[0][j] are initialized to the original value in matrix.
