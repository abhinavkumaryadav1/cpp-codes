/* In this question the r goes out of bound while traversing for the possible solutions thats why
 we first find all subarrays with sum<=goal and substracted it with same type of function where sum==goal-1 */

#include <iostream>
#include <vector>
using namespace std;


    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int l = 0;
        int r = 0;
        int count = 0;
        int sum = 0;

        while (r < nums.size()) {
            sum = sum + nums[r];
            while (sum > goal) {
                sum = sum - nums[l];
                l++;
            }
            if (sum <= goal) {
                count = count + r - l + 1;
            }
            r++;
        }

    
   


    int goalLessThanOne(vector<int>& nums, int goal);
 // calling the function (goal-1)
    int goalessOne = goalLessThanOne(nums, goal - 1);
    int originalGoal = count - goalessOne;
    return originalGoal;
}
int goalLessThanOne(vector<int>& nums, int goal) {
        if (goal < 0) return 0;
        int l = 0;
        int r = 0;
        int count = 0;
        int sum = 0;

        while (r < nums.size()) {
            sum = sum + nums[r];
            while (sum > goal) {
                sum = sum - nums[l];
                l++;
            }
            if (sum <= goal) {
                count = count + r - l + 1;
            }
            r++;
        }
        return count;
    }

int main() {
    
    
    // Example input
    vector<int> nums = {1, 0, 1, 0, 1};
    int goal = 2;

    cout<<numSubarraysWithSum(nums,goal);

    return 0;
}
