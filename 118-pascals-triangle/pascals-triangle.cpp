
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans; // Stores all rows of Pascal's triangle

        for (int i = 0; i < numRows; i++) { // Iterate through each row
            vector<int> row(i + 1, 1);      // Initialize row with 1s

            for (int j = 1; j < i; j++) {  // Process only inner elements
                row[j] = ans[i - 1][j - 1] // Upper-left element
                         + ans[i - 1][j];  // Upper-right element
            }

            ans.push_back(row); // Add current row to result
        }

        return ans; // Return the completed triangle
    }
};
