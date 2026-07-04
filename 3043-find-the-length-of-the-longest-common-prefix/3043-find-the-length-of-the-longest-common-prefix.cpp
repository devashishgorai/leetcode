class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {

        unordered_set<string> prefixes;

        // Store all prefixes of arr1
        for (int num : arr1) {

            string s = to_string(num);
            string prefix = "";

            for (char ch : s) {
                prefix += ch;
                prefixes.insert(prefix);
            }
        }

        int ans = 0;

        // Check prefixes of arr2
        for (int num : arr2) {

            string s = to_string(num);
            string prefix = "";

            for (char ch : s) {

                prefix += ch;

                if (prefixes.count(prefix))
                    ans = max(ans, (int)prefix.length());
                else
                    break;
            }
        }

        return ans;
    }
};