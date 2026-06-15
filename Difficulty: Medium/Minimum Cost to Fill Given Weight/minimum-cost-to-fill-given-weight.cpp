class Solution {
public:
    int minimumCost(vector<int>& cost, int w) {
        vector<int> dp(w + 1, INT_MAX);

        dp[0] = 0; // 0 kg ka cost 0

        for (int i = 1; i <= w; i++) {
            for (int j = 0; j < cost.size(); j++) {

                int weight = j + 1;

                // packet available hona chahiye
                // aur remaining weight possible hona chahiye
                if (cost[j] != -1 && weight <= i && dp[i - weight] != INT_MAX) {
                    dp[i] = min(dp[i], dp[i - weight] + cost[j]);
                }
            }
        }

        return (dp[w] == INT_MAX) ? -1 : dp[w];
    }
};