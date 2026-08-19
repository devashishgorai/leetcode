class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, int> mp;

        for (auto &seat : reservedSeats) {
            int row = seat[0];
            int col = seat[1];
            mp[row] |= (1 << (col - 1));
        }

        int ans = (n - mp.size()) * 2;

        int leftMask = 0;
        for (int i = 2; i <= 5; i++)
            leftMask |= (1 << (i - 1));

        int midMask = 0;
        for (int i = 4; i <= 7; i++)
            midMask |= (1 << (i - 1));

        int rightMask = 0;
        for (int i = 6; i <= 9; i++)
            rightMask |= (1 << (i - 1));

        for (auto &[row, mask] : mp) {
            bool left = (mask & leftMask) == 0;
            bool mid = (mask & midMask) == 0;
            bool right = (mask & rightMask) == 0;

            if (left && right)
                ans += 2;
            else if (left || mid || right)
                ans += 1;
        }

        return ans;
    }
};