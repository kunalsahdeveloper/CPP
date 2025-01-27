


#include<iostream>
using namespace std;



int main(){

    int arr[5] = {4,7,24,6,6};
    int arr1[5];


    for(int i=4; i>=0; i--){
        arr1[i] = arr[i]*arr[i-1]; 
    }
    for(int i=0; i<5; i++){
        cout<<arr1[i]<<" ";
    }


    return 0;
}