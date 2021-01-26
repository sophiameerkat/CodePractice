#357. Count Numbers with Unique Digits
class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if (n == 0)
            return 1;
        vector<int> dp(n+1, 0);
        dp[1] = 10;
        for (int i = 2; i <= n; i++) {
            dp[i] = 9;
            int RepeatNum = 9;
            int MultipleTimes = i - 1;
            while (MultipleTimes > 0) {
                dp[i] *= RepeatNum;
                RepeatNum -= 1;
                MultipleTimes -= 1;
            }
            dp[i] += dp[i-1];
        }
        return dp[n];
    }
};
