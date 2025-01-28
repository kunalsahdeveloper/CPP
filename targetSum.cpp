#include<iostream>
using namespace std;

// given array check if the target can be achieved or not by adding value of arr.
bool checkTargetAchieve(int arr[], int n, int target, int i){

    if(i>=n && target !=0 ){
        return false;
    }

    if(target == 0)
        return true;
    else{
        return checkTargetAchieve(arr, n, target-arr[i], i+1) || checkTargetAchieve(arr, n, target, i+1);
    }
}    //function done by me


// //done by sir
// bool checkTargetAchieve(int arr[], int n, int target, int i){

//     if(target == 0) return true;
//     if(i >=n && target < 0)  return false;
    
//     return checkTargetAchieve(arr, n, target-arr[i], i+1) || checkTargetAchieve(arr, n, target, i+1);
// } 

int main(){

    int arr[]={3,2,4,9,0, 6};
    cout<<checkTargetAchieve(arr, 6, 10,0);

    return 0;
}