// Arr is given of size n, in which arr's value is from 1 to n. find the one that is repeating and missing

#include<iostream>
using namespace std;




int main(){
    int n=5;
    int arr[5] = {1,2,2,4,5};

    // int arr1[5+1] = {};

    // for(int i=0; i<n; i++){

    //     arr1[arr[i]]++;

    // }


    // int missing, repeated;
    // for(int i=1; i<=n; i++){
    //     if(arr1[i] == 2){
    //         repeated = arr[i];
    //     }
    //     if(arr1[i]==0){
    //         missing = i;
    //     }
    // }

    // cout<<missing<<"  "<<repeated<<endl;



    // new approach


    int s1=0, s2=0, SqSum1=0, SqSum2=0;

    s1 = n*(n+1)/2;
    SqSum1 = n*(n+1)*(2*n+1)/6;
    for(int i=0; i<n; i++){
        s2+=arr[i];
        SqSum2+=arr[i]*arr[i];
    }

    int diff, diffSq;
    diff = s1-s2;
    diffSq = SqSum1-SqSum2;
    
    int sumMr = diffSq/diff;

    int missing = (sumMr+diff)/2;
    int repeated = sumMr-missing;

    cout<<missing<<"  "<<repeated<<endl;

}
