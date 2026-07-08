class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {

        vector<pair<int, pair<int, int>>> cells;

        // Store {distance, {row, col}}
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {

                int dist = abs(i - rCenter) + abs(j - cCenter);
                cells.push_back({dist, {i, j}});
            }
        }

        // Sort by distance
        sort(cells.begin(), cells.end());

        vector<vector<int>> ans;

        // Extract coordinates
        for (auto &cell : cells) {
            ans.push_back({cell.second.first, cell.second.second});
        }

        return ans;
    }
};