class Solution {
public:
    long long makeSubKSumEqual(vector<int>& arr, int k) {
        int n = arr.size();
        int g = gcd(n, k);

        long long ans = 0;

        for (int start = 0; start < g; start++) {
            vector<int> group;

            for (int i = start; i < n; i += g) {
                group.push_back(arr[i]);
            }

            sort(group.begin(), group.end());

            int median = group[group.size() / 2];

            for (int x : group) {
                ans += abs(x - median);
            }
        }

        return ans;
    }
};