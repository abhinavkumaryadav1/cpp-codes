/*54. Spiral Matrix
Given an m x n matrix, return all elements of the matrix in spiral order.

Example 1:

Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
Example 2:

Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]
 
Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 10
-100 <= matrix[i][j] <= 100 */

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        int cnt=0;
        int total= row*col;
        int strow=0;
        int lastcol=col-1;
        int lastrow = row-1;
        int stcol = 0;

        while(cnt<total)
        {
          
          //case I: first row
            for(int i =stcol; cnt<total && i<=lastcol;i++)
            {
                ans.push_back(matrix[strow][i]);
                cnt++;
            }
            strow++;
          //case II: last col
          for(int j=strow ; cnt<total && j<=lastrow ; j++)
          {
            ans.push_back(matrix[j][lastcol]);
                cnt++;
          }
          lastcol--;

          //case III: last row
          for(int k=lastcol; cnt<total && k>=stcol;k--)
          {
            ans.push_back(matrix[lastrow][k]);
            cnt++;
          }
          lastrow--;

          //case IV: first col

          for(int l = lastrow; cnt<total && l>=strow;l--)
          {
            ans.push_back(matrix[l][stcol]);
            cnt++;
          }
          stcol++;

        }

        return ans;
    }
};

