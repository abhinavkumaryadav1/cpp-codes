/*238. Product of Array Except Self
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
 
Constraints:

2 <= nums.length <= 105
-30 <= nums[i] <= 30
The input is generated such that answer[i] is guaranteed to fit in a 32-bit integer.
 
Follow up: Can you solve the problem in O(1) extra space complexity? (The output array does not count as extra space for space complexity analysis.)*/


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      int n=nums.size();
      vector<int> res;
      //Brute force runs for most cases but TLE at end so nahi chalega.
      // for(int i=0;i<n;i++)
      //   {
      //       int temp=1;
      //       for(int j=0;j<n;j++)
      //       {
      //           if(j==i) continue;
                
      //               temp=temp*nums[j];
                
      //       }
            
      //       res.push_back(temp);
      //   }

      //Prefix and Postfix product method (prefix product * postfix product = index product except self)

      vector<int> preprod(n);
      vector<int> postprod(n);                    //for saving memory(O(1))
      preprod[0]=1;                              //int prefix = 1;
      for(int i=1;i<n;i++)                      //for (int i = 0; i < n; i++) {
      {                                        //res[i] = prefix;
          preprod[i]=nums[i-1]*preprod[i-1];  //prefix *= nums[i];}
      }

      postprod[n-1]=1;             //int postfix = 1;                     
      for(int i =n-2;i>=0;i--)    //for (int i = n - 1; i >= 0; i--) {         
      {                          //res[i] *= postfix;           
        postprod[i] = nums[i+1]*postprod[i+1];  //postfix *= nums[i];}   
      }
        
      for(int i=0;i<n;i++)
      {
        res.push_back(preprod[i]*postprod[i]);
      }

        return res;  
    }
};

