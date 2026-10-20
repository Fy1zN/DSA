class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> ans;                     // Store valid IPs
        int n = s.size();                       // Length of string

        for (int i = 1; i < n; i++) {           // First dot
            for (int j = i + 1; j < n; j++) {   // Second dot
                for (int k = j + 1; k < n; k++) { // Third dot
                    string a = s.substr(0, i);   // First block
                    string b = s.substr(i, j-i); // Second block
                    string c = s.substr(j, k-j); // Third block
                    string d = s.substr(k);      // Fourth block

                    if (a.size()>3 || b.size()>3 ||
                        c.size()>3 || d.size()>3)
                        continue;                // Block max 3 digits

                    if ((a.size()>1 && a[0]=='0') ||
                        (b.size()>1 && b[0]=='0') ||
                        (c.size()>1 && c[0]=='0') ||
                        (d.size()>1 && d[0]=='0'))
                        continue;                // No leading zeros

                    if (stoi(a)>255 || stoi(b)>255 ||
                        stoi(c)>255 || stoi(d)>255)
                        continue;                // Block value max 255

                    ans.push_back(a+"."+b+"."+c+"."+d); // Build valid IP
                }
            }
        }
        return ans;                              // Return valid IPs
    }
};