class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = "";               // Store the column title

        while(columnNumber > 0){          // Continue until number becomes 0
        columnNumber -- ;                  // Excel starts from 1, so subtract 1

        int remainder = columnNumber % 26 ; // Get value from 0 to 25
        result += 'A' + remainder ;         // Convert 0-25 into A-Z
        columnNumber /= 26;                  // Move to the next position
     }
     reverse(result.begin(),result.end()); 
     return result;   
    }
};