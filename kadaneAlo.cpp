#include<iostream>
using namespace std;        //upsolve

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