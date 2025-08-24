/*
73. Set Matrix Zeroes

Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

You must do it in place.

Example 1:

Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]
Example 2:

Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]
 
Constraints:

m == matrix.length
n == matrix[0].length
1 <= m, n <= 200
-231 <= matrix[i][j] <= 231 - 1
*/

//Brute force (will fail if test case include the -ve number which you are setting in matrix)
// TC: O(M∗N∗(M+N))

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

      int m=matrix.size();
      int n=matrix[0].size();


      for(int i=0;i<m;i++)
      {
        for(int j=0;j<n;j++)
        {
          if(matrix[i][j] == 0)
          {

            matrix[i][j] = -1608;
           

              int col=j;
              int row=i;

              //for columm
              for(int i=0;i<m;i++)
              {
                if(matrix[i][col] != 0 && matrix[i][col] != -1608) {
                
                 matrix[i][col] = -1608;
                }
                
              }

              //for row
              for(int i=0;i<n;i++)
              {
              if(matrix[row][i] != 0 && matrix[row][i] != -1608) 
               { 
                 matrix[row][i] = -1608;
              }
                
              }
            
          }
        }
      }

      for(int i=0;i<m;i++)
      {
        for(int j=0;j<n;j++)
        {
          if(matrix[i][j] ==-1608)
          {
            matrix[i][j] =0;
          }
        }
      }
        
    }
};
