#include<iostream>
using namespace std;        //upsolve

// Kadane's Algorithm

// Kadane's Algorithm is used to find the maximum sum of
//  a contiguous subarray within a one-dimensional 
//  numeric array. It operates in O(n) time complexity, 
//  making it very efficient for this purpose.

// Key Concepts
// Initialization:

// maxSum: This variable keeps track of the maximum sum 
// encountered so far. It is initialized to the first 
// element of the array.
// currentSum: This variable keeps track of the current subarray sum. 
// It is initialized to 0.
// Iterating through the array:

// For each element in the array, add it to currentSum.
// If currentSum exceeds maxSum, update maxSum.
// If currentSum becomes negative, reset it to 0. This is because 
// a negative sum would decrease the sum of any subsequent subarray.

int kadaneAlgo(int arr[], int n){
    int maxSum = arr[0];
    int currentSum = 0;

    for(int i=0; i<n; i++){
        currentSum += arr[i];
        if(currentSum > maxSum)
            maxSum = currentSum;
        if(currentSum < 0)
            currentSum = 0;
    }
    return maxSum;

}


int main(){
    int arr[] ={14,-9,0,4,-3,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<kadaneAlgo(arr, n)<<" ";


    return 0;
}