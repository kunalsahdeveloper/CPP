#include<iostream>
#include<vector>
using namespace std;

int firstIdxInArray(vector<int> arr){

    int l = 0, h = arr.size() - 1;
    int ans = -1;

    while(l<=h){
        int mid = (l+h)/2;

        if(arr[mid]==1){
            ans = mid;
            h = mid-1;
        }else{
            l = mid +1;
        }
        
    }
    return ans;


}



int main(){

    vector<int> arr = {0,0,0,0,1,1};
    cout<<firstIdxInArray(arr);

    return 0;
}