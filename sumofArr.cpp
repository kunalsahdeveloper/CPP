#include<iostream>
using namespace std;

int sumArr(int arr[], int x){  // x is length of arr[]

    if(x<=0)
        return 0;

    return arr[x-1]+sumArr(arr, x-1);

}

int main(){


    int arr[] = {3,5,8};
    cout<<sumArr(arr, 3)<<" ";

    return 0;
}