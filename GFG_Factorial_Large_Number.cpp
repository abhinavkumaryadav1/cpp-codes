/*Factorials of large numbers
Difficulty: MediumAccuracy: 36.57%Submissions: 174K+Points: 4Average Time: 20m
Given an integer n, find its factorial. Return a list of integers denoting the digits that make up the factorial of n.

Examples:

Input: n = 5
Output: [1, 2, 0]
Explanation: 5! = 1*2*3*4*5 = 120
Input: n = 10
Output: [3, 6, 2, 8, 8, 0, 0]
Explanation: 10! = 1*2*3*4*5*6*7*8*9*10 = 3628800
Input: n = 1
Output: [1]
Explanation: 1! = 1 
Constraints:
1 ≤ n ≤ 103*/

// User function template for C++

class Solution {
  public:
    vector<int> factorial(int n) {
        
        vector<int> ans;
        ans.push_back(1);
        
        for(int i=2;i<=n;i++)
        {
        int carry =0;
            
            for(int j=0;j<ans.size();j++)
            {
              int multi = i*ans[j];
              multi=multi+carry;
              ans[j]=multi%10;
              carry = multi/10;
            }
            
            while(carry>0)
            {
                ans.push_back(carry%10);
                carry = carry/10;
            }
            
        }
        
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};