class Solution {
public:
    vector<vector<int>> ans;

    void solve(vector<int>& nums, int index, vector<int>& curr) {
        if (index == nums.size()) {
            ans.push_back(curr);
            return;
        }

        // Take nums[index]
        curr.push_back(nums[index]);
        solve(nums, index + 1, curr);

        // Don't take nums[index]
        curr.pop_back();
        solve(nums, index + 1, curr);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> curr;
        solve(nums, 0, curr);
        return ans;
    }
};