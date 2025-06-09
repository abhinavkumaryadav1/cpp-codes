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
        
        for(r=0;r<n;r++)
        {
            vector<int> ch(256, 0);
            for(int j=0;j<m;j++)
            {
                ch[t[j]]++;
            }
             cnt=0;
            for(int i=r ; i<n ; i++)
            {
                

                if(ch[s[i]]>0)
                {
                    cnt++;
                }
                if(cnt==m)
                {
                    if(i-r+1<sub_len)
                    {
                        sub_len=i-r+1;
                        st=r;
                    }
                   break; 
                }
            }


        }
         return  s.substr(st,sub_len );
        
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
