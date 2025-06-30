#include<iostream>
using namespace std;

int secondLargestElement(int arr[], int n){

    int res = -1;
    int largest=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]> largest){
            res = largest;
            largest = arr[i];
        }
    }
    return res;

}


int main(){

    int arr[] = {8,9,5,2,34,25,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<secondLargestElement(arr, n);



    return 0;
}



// 2.reverse arry without any space;
// 3. find no of ood and even in array;
// 4. find majoriry element(occuring more than m/2 times)
    // in array 


#include<iostram>
using namespace std;

vector<int> prefixSum(int arr[], int n){

    vector<int> prefix(n);
    prefix[0]= arr[0];
    for(int i=1; i<n; i++){
        prefix[i] = prefix[i]+arr[i];
    }
    // return prefix;

    for(int k=0; k<q; k++){
        int j = queriesi[i];
        int i =
    }


}

int main(){



    return 0;
}