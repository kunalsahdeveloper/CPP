
#include <iostream>
using namespace std;
void bubblesort(int arr[], int n){
    
    for(int i=0; i<n-1; i++){
        bool flag = 0;
        for(int j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag = 1;
            }
        }
        if(flag==0)
            break;
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