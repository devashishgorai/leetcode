class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());

        // Find sum of longest sequential prefix
        int ans = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1] + 1)
                break;

            ans += nums[i];
        }

        // Find smallest missing integer >= ans
        while (st.count(ans))
            ans++;

        return ans;
    }
};