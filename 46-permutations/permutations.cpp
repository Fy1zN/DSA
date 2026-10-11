
class Solution {
public:
    vector<vector<int>> ans;                       // Stores all permutations

    void backtrack(vector<int>& nums, int idx) {   // Fills positions recursively
        if (idx == nums.size()) {                  // All positions are filled
            ans.push_back(nums);                   // Save the permutation
            return;                                // End this recursive call
        }

        for (int i = idx; i < nums.size(); i++) {  // Try each remaining element
            swap(nums[idx], nums[i]);              // Choose an element
            backtrack(nums, idx + 1);              // Generate remaining positions
            swap(nums[idx], nums[i]);              // Undo the choice
        }
    }

    vector<vector<int>> permute(vector<int>& nums) { // LeetCode entry function
        ans.clear();                               // Clear previous results
        backtrack(nums, 0);                        // Start at index 0
        return ans;                                // Return all permutations
    }
};
