class Solution {
public:
    int dp[1005][1005];
    int longestPalindromeSubseq(string s) {
        memset(dp, 0, sizeof(dp));
        int n = s.length();
        for(int i = 0; i < n; i++)
            dp[i][i] = 1;
        for(int len = 2; len <= n; len++) {
            for(int i = 0; i <= n-len; i++) {
                int j = i+len-1;
                if(s[i] == s[j])
                    dp[i][j] = dp[i+1][j-1] + 2;
                else 
                    dp[i][j] = max(dp[i][j-1], dp[i+1][j]);
            }
        }
        return dp[0][n-1];
    }
};