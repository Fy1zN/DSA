class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) 
        {
            return false;
        }
        int rf = 0;
        while (x > rf){ 
            rf = rf * 10 + x % 10; 
            x /= 10;
        }
        return x == rf || x == rf / 10; 
    }
};