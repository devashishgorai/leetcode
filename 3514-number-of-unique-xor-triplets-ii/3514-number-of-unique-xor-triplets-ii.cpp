class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int mx = *max_element(nums.begin(), nums.end()) * 2;

        vector<bool> pairXor(mx, false);
        for (int a : nums)
            for (int b : nums)
                pairXor[a ^ b] = true;

        vector<bool> vis(mx, false);
        for (int x = 0; x < mx; x++) {
            if (!pairXor[x]) continue;
            for (int c : nums)
                vis[x ^ c] = true;
        }

        return count(vis.begin(), vis.end(), true);
    }
};