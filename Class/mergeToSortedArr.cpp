#include<iostream>
using namespace std;

int* mergeinSorted(int *arr1, int* arr2){

    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    int arr[n1+n2];

    int i=0, j=0, k=0;
    while(i<n1 && j<n2){

        if(arr1[i] < arr2[i]){
            arr[k++] = arr1[i++];
        }else{
            arr[k++] = arr2[j++];
        }
    }

    while(i<n1){
        arr[k++] = arr1[i++];
    }
    while(j<n2){
        arr[k++] = arr2[j++];
    }

    return arr;
}

void print(int* arr){
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}



int main(){


    int arr1[] = {1,3,5,6,9,11};
    int arr2[] = {2,4,6,8};

    int arr[] = mergeinSorted(arr1, arr2);
    print(arr);

    return 0;
}