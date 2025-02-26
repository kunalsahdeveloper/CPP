// Online C compiler to run C program online
#include <iostream>
using namespace std;
void insertionsort(int arr[], int n){
    
    for(int i=1; i<n; i++){
       int key = arr[i];
       int j = i-1;
       while(j>=0 && arr[j] >key){
            arr[j+1] = arr[j];
            j--;
       }
       arr[j+1] = key;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }
    
}


int main() {
    
    int arr[] = {4,2,7,37,42,238,83,21};
    int n=8;
    insertionsort(arr, n);
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<< " ";
    // }

    return 0;
}