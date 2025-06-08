#include <iostream>
#include <string>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        int l = 0;
        int r = 0;
        int sub_len = INT_MAX;
        int st = -1;
        int n = s.size();
        int m = t.size();
        int cnt = 0;
        vector<int> ch(256, 0);

        for (int i = 0; i < m; i++) {
            ch[t[i]]++;
        }

        while (r < n) {
            if (ch[s[r]] > 0) {
                cnt++;
            }
            ch[s[r]]--;

            while (cnt == m) {
                if (r - l + 1 < sub_len) {
                    sub_len = r - l + 1;
                    st = l;
                }

                ch[s[l]]++;
                if (ch[s[l]] > 0) {
                    cnt--;
                }
                l++;
            }
            r++;
        }
        return st == -1 ? "" : s.substr(st, sub_len);
    }
};

int main() {
    Solution sol;

    string s = "ADOBECODEBANC";
    string t = "ABC";

    string result = sol.minWindow(s, t);

    if (result.empty()) {
        cout << "No window containing all characters of '" << t << "' found in '" << s << "'." << endl;
    } else {
        cout << "Minimum window substring is: \"" << result << "\"" << endl;
    }

    return 0;
}
