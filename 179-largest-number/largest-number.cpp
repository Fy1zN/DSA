
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> arr;                           // Create a vector to store numbers as strings

        for (int num : nums) {                        // Iterate through every number
            arr.push_back(to_string(num));            // Convert each integer to string and store it
        }

        sort(arr.begin(), arr.end(), [](string a, string b) { // Sort using a custom comparator
            return a + b > b + a;                     // Place the order producing the larger number first
        });

        if (arr[0] == "0") {                           // Check whether the largest element is zero
            return "0";                               // Return a single zero if all elements are zero
        }

        string result = "";                            // Initialize the final result string

        for (string s : arr) {                         // Iterate through sorted strings
            result += s;                               // Append each string to the result
        }

        return result;                                 // Return the largest possible number
    }
};
