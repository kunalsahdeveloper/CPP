#include<iostream>
using namespace std;




int main(){

    int arr[5] = {4,7,24,673,46};

    int min =  123223;
    int max =  -1312423;

    for(int i=0; i<5; i++){
        if(arr[i]<min){
            min = arr[i];
        }
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<min<<" "<<max;

    return 0;
}