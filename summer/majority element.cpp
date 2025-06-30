#include <iostream>
using namespace std;


int majorityElement(const vector<int>& nums) {
    
    for(int i=0; i<nums.size(); i++){
        int ele = nums[i];
        nums[ele]++;
    }
    int ans =-1;
    for(i=0; i<10; i++){
        if(nums[i] > n/2){
            ans = i;
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    
    return 0;
}