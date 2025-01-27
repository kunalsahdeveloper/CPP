#include<iostream>
using namespace std;

void printArr(int arr[], int l){
    // int l = arr.length();
    for(int i=0; i<l; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[] = {2,3,1,4};
    printArr(arr, 4);


    return 0;
}