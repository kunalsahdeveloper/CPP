#include<iostream>
#include<vector>
using namespace std;

int sumOfArray(vector<int>& arr, int s, int e){

    // int n = arr.size();
    if(s>e)
        return 0;
    if(s==e)
        return arr[s];
    
    int mid =  (s+e)/2;
    return sumOfArray(arr, s,mid) + sumOfArray(arr ,mid+1,e);

}

int main(){
 
    vector<int> arr = {8,7,6,0,6};
    cout<<sumOfArray(arr, 0, 3);


    return 0;
}