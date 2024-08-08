#include<iostream>
using namespace std;
#include<vector>
    bool checkPossibility(vector<int>& nums) {
        int cnt = 0;             
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < nums[i-1]){
                if(++cnt > 1) return false;
                if(i == 1 || nums[i-2] <= nums[i]) nums[i-1] = nums[i];    
                else nums[i] = nums[i-1];
            }
        }
        return true;
    }

int main()
{
    
    vector<int> arr;
    arr.push_back(6);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);

    cout<<" it can be non decreasing array "<<checkPossibility(arr);
    
    return 0;
}