class Solution {
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int>> visited(row, vector<int>(col, 0));
        int ans = 0;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (grid[i][j] != 0) {
                    ans = max(find_max(grid, visited, i, j), ans);
                }
            }
        }
        return ans;
    }

    int find_max(vector<vector<int>>& arr, vector<vector<int>>& visited, int i, int j) {
        if (i < 0 || j < 0 || i >= arr.size() || j >= arr[0].size() || visited[i][j] == 1 || arr[i][j] == 0) return -1000000;
        visited[i][j] = 1;
        int a = find_max(arr, visited, i + 1, j);
        if (a < 0) a = 0;
        int b = find_max(arr, visited, i - 1, j);
        if (b < 0) b = 0;
        int c = find_max(arr, visited, i, j + 1);
        if (c < 0) c = 0;
        int d = find_max(arr, visited, i, j - 1);
        if (d < 0) d = 0;
        visited[i][j] = 0;
        return max(max(a, b), max(c, d)) + arr[i][j];
    }
};