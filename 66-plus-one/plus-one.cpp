
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) { // Traverse right to left

            if (digits[i] < 9) {                      // Check if digit is less than 9
                digits[i]++;                           // Increment the digit
                return digits;                         // Return updated array
            }

            digits[i] = 0;                             // Set 9 to 0 and carry over
        }

        digits.insert(digits.begin(), 1);              // Add 1 if all digits were 9
        return digits;                                 // Return the final array
    }
};
