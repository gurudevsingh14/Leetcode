class Solution {
public:
    int minDistance(string s1, string s2) {
       int n1 = s1.size();
    int n2 = s2.size();
    vector<vector<int>> dp(s1.size() + 1, vector<int>(s2.size() + 1));
    for (int i = 0; i < s1.size(); i++)
        for (int j = 0; j < s2.size(); j++)
            dp[i][j] = 0;

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (s1[i] == s2[j])
                dp[i + 1][j + 1] += dp[i ][j ] + 1;
            else
                dp[i + 1][j + 1] += max(dp[i + 1][j], dp[i][j + 1]);
        }
    }
    return n1 + n2 - 2 * dp[n1 ][n2 ];
    }
};