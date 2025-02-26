// Online C compiler to run C program online
#include <iostream>
using namespace std;
void bubblesort(int arr[], int n){
    
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                // int t = arr[j];
                // arr[j] = arr[j+1];
                // arr[j+1]=t;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }
    
}


int main() {
    
    int arr[] = {4,2,7,37,42,238,83,21};
    int n=8;
    bubblesort(arr, n);
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<< " ";
    // }

    return 0;
}