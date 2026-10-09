
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1, last = -1;                 // Store first and last positions

        int low = 0, high = nums.size() - 1;       // Initialize search boundaries

        // Find the first occurrence
        while (low <= high) {
            int mid = low + (high - low) / 2;      // Calculate middle index

            if (nums[mid] == target) {
                first = mid;                       // Store current index
                high = mid - 1;                    // Search left for earlier occurrence
            }
            else if (nums[mid] < target) {
                low = mid + 1;                     // Target is in the right half
            }
            else {
                high = mid - 1;                    // Target is in the left half
            }
        }

        low = 0, high = nums.size() - 1;            // Reset boundaries for second search

        // Find the last occurrence
        while (low <= high) {
            int mid = low + (high - low) / 2;      // Calculate middle index

            if (nums[mid] == target) {
                last = mid;                         // Store current index
                low = mid + 1;                      // Search right for later occurrence
            }
            else if (nums[mid] < target) {
                low = mid + 1;                     // Target is in the right half
            }
            else {
                high = mid - 1;                    // Target is in the left half
            }
        }

        return {first, last};                      // Return positions, or {-1, -1}
    }
};
