class Solution {
public:
    string addBinary(string a, string b) {
        int left = a.length() - 1;  // Start at last digit of a
        int right = b.length() - 1; // Start at last digit of b

        int carry = 0; // Stores carry from previous addition

        string result = ""; // Stores the final binary answer

        while (left >= 0 || right >= 0 || carry) {

            int sum = carry; // Start addition with any previous carry

            if(left>=0){
                sum += a[left] - '0';    // Add digit from a
                left --;
            }

              if(right>=0){
                sum += b[right] - '0';    // Add digit from b
                right --;
            }
            result +=  (sum % 2) + '0';    // Current binary digit
            carry   =  sum / 2;            // Update carry
        }
        reverse(result.begin(), result.end());  // Reverse final answer
        return result;
    }
};