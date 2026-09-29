#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {

        // Stack stores opening brackets
        stack<char> st;

        // Traverse each character
        for (char c : s) {

            // If opening bracket, push into stack
            if (c == '(' || c == '[' || c == '{') {
                st.push(c);
            }

            // If closing bracket
            else {

                // No opening bracket to match
                if (st.empty())
                    return false;

                // Get the most recent opening bracket
                char top = st.top();

                // Check if brackets match
                if ((c == ')' && top != '(') ||
                    (c == ']' && top != '[') ||
                    (c == '}' && top != '{')) {
                    return false;
                }

                // Matching pair found, remove opening bracket
                st.pop();
            }
        }

        // Valid only if all opening brackets were matched
        return st.empty();
    }
};