class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        vector<unordered_map<int, int>> colors(n);
        unordered_set<int> winners;

        for (const auto& pair : pick) {
            int player = pair[0];
            int color = pair[1];
            colors[player][color]++;

            if (colors[player][color] > player) {
                winners.insert(player);
            }
        }
        return winners.size();
    }
};