class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> seen;   // Pehle se dekhe hue numbers store karega

        // Array ka har element check karo
        for (int num : nums) {

            // Agar number pehle se set me hai
            if (seen.find(num) != seen.end()) {
                return true;        // Duplicate mil gaya
            }

            // Nahi mila to set me insert kar do
            seen.insert(num);
        }

        // Pura array check ho gaya, duplicate nahi mila
        return false;
    }
};