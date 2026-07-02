class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {   // Element ko pick karne ke liye
            int count = 0;

            for (int j = 0; j < n; j++) { // frequency count karne ke liye.
                if (nums[i] == nums[j]) {
                    count++;
                }
            }

            if (count == 1) {   //Agar ek bar appear huwa toh return once
                return nums[i];
            }
        }

        return -1; // else return -1
    }
};

//Brute force