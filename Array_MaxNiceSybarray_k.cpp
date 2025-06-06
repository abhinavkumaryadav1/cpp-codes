//exactly same as previous question the only changes has been mark in the code abhi.

#include <iostream>
#include <vector>
using namespace std;


    int numSubarraysWithSum(vector<int>& nums, int k) {
        int l = 0;
        int r = 0;
        int count = 0;
        int sum = 0;

        while (r < nums.size()) {
            sum = sum + nums[r]%2;                             //added %2 this will either give 0 or 1
            while (sum > k) {
                sum = sum - nums[l]%2;                         //added %2 this will either give 0 or 1
                l++;
            }
            if (sum <= k) {
                count = count + r - l + 1;
            }
            r++;
        }

    
   


    int kLessThanOne(vector<int>& nums, int k);
 // calling the function (k-1)
    int kessOne = kLessThanOne(nums, k - 1);
    int originalk = count - kessOne;
    return originalk;
}
int kLessThanOne(vector<int>& nums, int k) {
        if (k < 0) return 0;
        int l = 0;
        int r = 0;
        int count = 0;
        int sum = 0;

        while (r < nums.size()) {
            sum = sum + nums[r]%2;                                  //added %2 this will either give 0 or 1
            while (sum > k) { 
                sum = sum - nums[l]%2;                              //added %2 this will either give 0 or 1
                l++;
            }
            if (sum <= k) {
                count = count + r - l + 1;
            }
            r++;
        }
        return count;
    }

int main() {
    
    
   
    vector<int> nums = {2,2,2,1,2,2,1,2,2,2};
    
    int k = 2;

    cout<<numSubarraysWithSum(nums,k);

    return 0;
}
