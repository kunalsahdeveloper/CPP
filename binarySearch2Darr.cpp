#include<iostream>
using namespace std;

bool BS(int arr[100][100], int )
    int s = 0, e = C-1;
    while(e > s){
        int mid = s +(e-s)/2;

        if(arr[i][mid]==target)
            return true;
        if(arr[i][mid] > target){
            s = mid+1;
        }else{
            e= mid;
        }
    }


bool search(int arr[100][100], int target, int R, int C){
    
    // int sR = 0, sC=0;
    // int eR = R-1, eC = C-1;
    
    // int midR  = sR + (eR-sR)/2;
    // int midC  = sC + (eC-sC)/2;

    for(int i=0; i<R; i++){
        if(arr[i][0] <=target  && arr[i][C-1] >= target){
             BS(arr, i, c, target);
        }

        return false;
        
    }

}


int main(){
    int arr[100][100] = {
                        {2,4,6,8},
                        {9,12,13,15},
                        {16,18,20,12},
                        {25,31,33,35},
                        {48,51,52,55}
                        };

    cout<<search(arr, 13, 5,4);

    return 0;
}