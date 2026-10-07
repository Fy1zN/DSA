class Solution {
public:
    bool isPalindrome(string s) {

        int left = 0;               // Start of string
        int right = s.length() - 1; // End of string

        while (left < right) {

            // Skip non-alphanumeric characters
            while (left < right && !isalnum(s[left])) {
                left++;
            }

            // Skip non-alphanumeric characters
            while (left < right && !isalnum(s[right])) {
                right--;
            }

            // Compare characters after converting to lowercase
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }

            // Move both pointers inward
            left++;
            right--;
        }

        return true; // All characters matched
    }
};