#include<iostream>
using namespace std;

// int frogjump(int n, int i){

//     if(i==n-1)
//         return 1;
//     if(i>=n)
//         return 0;
    
//     return frogjump(n, i+1) + frogjump(n,i+2);
// }

// consider that arr has 0 or 1 and frog cannot jump to 0 value ;
// find the no of ways ;

int frogjump(int arr[], int n, int i){

    if(i==n-1)
        return 1;
    if(i>=n)
        return 0;

   // not compleeted 

    return frogjump(arr, n, i+1) + frogjump(arr, n,i+2);

}



int main(){
    int arr[] = {1,1,1,0,1};
    cout<<frogjump(arr, 6,0);


    return 0;
}