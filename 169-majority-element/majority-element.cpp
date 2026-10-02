class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int candidate = 0;             // Current possible majority element
        int count = 0;                 // Current vote count of candidate

        for (int num : nums) {         // Go through each element of the array

            if (count == 0) {
                candidate = num;       // No candidate → choose current element
            }

            if (num == candidate) {
                count++;               // Same as candidate → increase its votes
            }
            else {
                count--;               // Different → cancel one vote
            }
        }

        return candidate;              // Return the majority element
    }
};