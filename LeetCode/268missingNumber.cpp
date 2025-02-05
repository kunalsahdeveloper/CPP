
// Given an array nums containing n distinct numbers in 
// the range [0, n], return the only number in the range that is missing from the array.


// Example 1:

// Input: nums = [3,0,1]
// Output: 2

// Explanation:
// n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is 
// the missing number in the range since it does not appear in nums.



class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int sum=0;
        int n = nums.size();
        int total = (n*(n+1))/2;

        for(int i=0; i<n; i++){
            sum += nums[i];
        }

        return total - sum;


    //     int len = nums.size(),i, t=0;
    //     int temp[len+1];


    //    for(int i=0; i<nums.size(); i++){
    //         temp[nums[i]] = 1;
    //    }

    //    for(int i=0; i <len+1; i++){
    //     if(temp[i] != 0)
    //         return i;
    //    }


    }
};