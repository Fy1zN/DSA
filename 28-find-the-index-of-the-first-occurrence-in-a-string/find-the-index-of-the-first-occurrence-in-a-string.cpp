class Solution {
public:
    int strStr(string haystack, string needle) {

        int n = haystack.length();
        int m = needle.length();

        // Go through every possible starting position
        for (int i = 0; i <= n - m; i++) {

            // Assume needle matches
            bool found = true;

            // Compare needle with haystack
            for (int j = 0; j < m; j++) {

                // If characters don't match
                if (haystack[i + j] != needle[j]) {
                    found = false;
                    break;
                }
            }

            // If the whole needle matched
            if (found) {
                return i;
            }
        }

        // Needle was not found
        return -1;
    }
};