


// Example 1:

// Input: nums = [1,-3,2,3,-4]
// Output: 5
// Explanation: The subarray [2,3] has absolute sum = abs(2+3) = abs(5) = 5.
// Example 2:

// Input: nums = [2,-5,1,-4,3,-2]
// Output: 8
// Explanation: The subarray [-5,1,-4] has absolute sum = abs(-5+1-4) = abs(-8) = 8.
class Solution {
    public:
        int maxAbsoluteSum(vector<int>& nums) {
    
            int currSum = 0;
            int mincurrSum =0;
            int maxSum = INT_MIN;
            int minSum =  INT_MAX;
            for(int i=0; i<nums.size(); i++){
            
                //for find maximu sum of subarray
                currSum += nums[i];
                maxSum = max(maxSum, currSum);
                if(currSum < 0) currSum=0;
    
    
                // for find minimum sum of Subarray
                mincurrSum += nums[i];
                minSum = min(minSum, mincurrSum);
                if(mincurrSum > 0) mincurrSum =0;
    
            }
            return max(maxSum , abs(minSum));
            
        }
    };