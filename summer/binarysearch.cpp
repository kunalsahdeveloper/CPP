#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int k){
    int n = arr.size();
    int s=0, e = n-1;

    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid]==k)
            return mid;

        if(arr[mid]>k){
            e=mid-1;
        }else{
            s= mid+1;
        }
    }
    return -1;
}


vector<int> firstLastOccurance(const vector<int>& arr, int k){
    int n = arr.size();
    int s=0, e = n-1;

    int res=-1, first, second;
    vector<int> ans(2);
    

    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid]==k)
            res = mid;

        if(arr[mid]>k){
            e=mid-1;
        }else{
            s= mid+1;
        }
    }
    
    first = second = res;
    while(first>=0 && k == arr[first]){
        first--;
    }
    while(second<n && k == arr[second]){
        second++;
    }
    return {first+1, second-1};

}







// vector<int> firstLastOccurance(const vector<int>& arr, int k){
//     int n = arr.size();
//     int s=0, e = n-1;

//     int res=-1, first, second;
//     vector<int> ans(2);
    

//     while(s<=e){
//         int mid = s + (e-s)/2;
//         if(arr[mid]==k){
//             res = mid;
//             while()

//         }
            

//         if(arr[mid]>k){
//             e=mid-1;
//         }else{
//             s= mid+1;
//         }
//         return {-1,-1};
//     }
    
    
    



int main(){

    // vector<int> arr = {0,1,3};
    // cout<<binarySearch(arr, 3);
    vector<int> arr = {1,3,3,3,3,6,7};
    vector<int> ans = firstLastOccurance(arr, 3);

    cout<<ans[0]<<" "<<ans[1]<<endl;
    

    return 0;
}