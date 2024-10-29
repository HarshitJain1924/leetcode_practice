class Solution {
public:
    bool check(vector<int>& a, vector<int>& b) {
        if (b[0] <= a[0] && b[1] <= a[1] && b[2] <= a[2])
            return true;
        else
            return false;
    }
    int solve(vector<vector<int>>& cuboids) {
        int n = cuboids.size();
        vector<int> currRow(n + 1, 0);
        vector<int> nextRow(n + 1, 0);
        for (int curr = n - 1; curr >= 0; curr--) {
            for (int prev = curr - 1; prev >= -1; prev--) {
                int include = 0;
                if ((prev == -1) || check(cuboids[curr], cuboids[prev])) {
                    include = cuboids[curr][2] + nextRow[curr + 1];
                }
                int exclude = nextRow[prev + 1];
                currRow[prev + 1] = max(include, exclude);
            }
            nextRow = currRow;
        }
        return nextRow[0];
    }
    int maxHeight(vector<vector<int>>& cuboids) {
        for (auto& i : cuboids)
            sort(i.begin(), i.end());
        sort(cuboids.begin(), cuboids.end());
        return solve(cuboids);
    }
};