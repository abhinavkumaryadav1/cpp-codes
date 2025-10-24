/*There is a board with 2 rows and N columns, represented by a matrix M. Rows are numbered from 0 to 1 from top to bottom and columns are numbered from 0 to N-1 from left to right. Each cell contains either a 0 or a 1. You know that:
the sum of integers in the 0-th (upper) row is equal to U. the sum of integers in the 1-st (lower) row is equal to L,
the sum of integers in the K-th column is equal to C[K].
Your job is to recover M based on this information.
Write a function:
string solution(int U, int L, vector<int> &C);
that, given two integers U, L and an array C of N integers, as described above, returns a string describing the matrix M in the following format. The first part of the string should be the description of the upper row (N characters: e or 1), then there should be comma (,), and finally there should be the description of the lower row (N characters: e or 1.) The output string should not contain any whitespace.
If there exist multiple valid Ms, your function may return any one of them. If no valid M exists, your function should return the word IMPOSSIBLE.
Test Output
Examples:
1. Given U-3, L-2. C=12. 1. 1. 0. 11. your function may, for example, return 11001, 10100 which describes the


Examples:
1. Given U = 3 L = 2 C = [2, 1, 1, 0, 1] your function may, for example, return 11001, 10100 which describes the following board:
01234
0
1
100
1
1
1
0
10
0
2. Given U = 2 L = 3 C = [0, 0, 1, 1, 2] your function should return the word IMPOSSIBLE, because no matrix M satisfies such conditions.
3. Given U = 2 L = 2 C = [2, 0, 2, 0] your function should return 1010, 1010, which describes the following board:
0 1 23
0
1
0
1
0
1
1
01
Write an efficient algorithm for the following assumptions:
U and L are integers within the range [0..100,000];
N is an integer within the range [1..100,000];
each element of array C is an integer within the range [0..2].*/

#include <bits/stdc++.h>
using namespace std;


string solution(int U, int L, vector<int> &C) {
    
    string ans;
    int n = C.size();
    int matrix[2][n];

    for(int i=0;i<2;i++)
    {
        for (int j=0;j<n;j++)
        
        {
            matrix[i][j]=0;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(C[i]==2)
        {
            if(U<=0 || L<=0) return "IMPOSSIBLE";
            matrix[0][i]=1;
            matrix[1][i]=1;
            U--;
            L--;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(C[i]==1)
        {
            if(U>L && U>0)
            {
                matrix[0][i]=1;
                U--; 
            }
            else if(L>0)
            {
                matrix[1][i]=1;
                L--;
            }
            else if(U>0)
            {
                matrix[0][i]=1;
                U--;
            }

            else return "IMPOSSIBLE";
        }
    }

    
    if(U>0 || L>0)return "IMPOSSIBLE";
    
        for(int j = 0; j < n; j++) ans.push_back(matrix[0][j] + '0');
        ans.push_back(',');
        for(int j = 0; j < n; j++) ans.push_back(matrix[1][j] + '0');
    

    return ans;
}


int main() {

    int U, L, N;
    U=2;
    L=2;

    

    vector<int> C = {2,0,2,0};

    

    string ansf = solution(U, L, C);
    cout << "\nResult: " << ansf << "\n";

    return 0;
}
