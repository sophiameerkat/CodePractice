tags: DP, Math  
idea: Let f(n) be the count of number that have less than n digits the same. For example, f(1) = 10, f(2) = 9*9, f(3) = 9*9*8. Then use math to implement the process. For the answer dp[i] = dp[i-1] + f(i).  
