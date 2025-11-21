/*14. Longest Common Prefix
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 
Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters if it is non-empt*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       
       if (strs.empty()) return "";
       int size = strs.size();
       int strsize = strs[0].size();
       string ans;
       for(int i =0;i<strsize;i++)
       { 

        char helperch = strs[0][i];
          
          for(int j=0;j<size;j++) //1 cuz you are already refrencing 1st elmnt
          {
            if(strs[j][i] == helperch)
            {
              if(j==size-1)
              {
              ans.push_back(helperch);
              }
            }
          else return ans; //also include i >= strs[j].size() then return ans
          }
       }

       return ans;
    }
};