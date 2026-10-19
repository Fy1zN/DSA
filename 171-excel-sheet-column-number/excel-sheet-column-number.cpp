class Solution {
public:
    int titleToNumber(string columnTitle) {
        int r  = 0;                       // Stores the final column number

        for (char ch : columnTitle){            // Iterate through each character
            int v = ch - 'A' + 1;            // Convert A-Z into 1-26
            r = r * 26 + v;                   // Shift left in base 26 and add value
        }
        return r;                      // Return the calculated column number
    }
};