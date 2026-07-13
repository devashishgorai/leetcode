class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;

        while (n != 1 && seen.find(n) == seen.end()) {
            seen.insert(n);

            int sum = 0;

            while (n > 0) {
                int digit = n % 10;
                sum += digit * digit;
                n = n / 10;
            }

            n = sum;
        }

        return n == 1;
    }
};

//  Logic

// Take a number → find sum of squares of its digits → repeat.

// Example 19:

// 19 → 1² + 9² = 82
// 82 → 8² + 2² = 68
// 68 → 6² + 8² = 100
// 100 → 1² = 1 ✅ Happy Number