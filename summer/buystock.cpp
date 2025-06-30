#include<iostream>
using namespace std;

int buySellStock(int arr[], int n){
    // int res =0;
    // for(int i=0; i<n; i++){
    //     for(int j= i+1; j<n; j++){
    //         res= max(res, arr[j]-arr[i]);
    //     }
    // }
    // return res;


    int maxPrice[n];
    maxPrice[n-1] = arr[n-1];
    for(int i=n-2; i>=0; i--){
        maxPrice[i] = max(arr[i], maxPrice[i+1]);
    }
    int res = 0;
    for(int i=0; i<n; i++){
        res = max(res, maxPrice[i] - arr[i]);
    }
    return res;
}

int main(){

    int arr[] = {7,1,5,3,6,4,2};
    int n=7;
    cout<<buySellStock(arr, n);

    return 0;
}