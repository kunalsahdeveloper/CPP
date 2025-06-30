#include<iostream>
#include<vector>
using namespace std;

int positionOfInsertInArray(const vector<int>& arr, int k){

    int l= 0, h= arr.size() - 1, ans = arr.size();
    while(l <= h){
        int mid = (l+h)/ 2;

        if(arr[mid] == k){
            return mid;
        }
        else if(arr[mid] < k){
            l = mid+1;
        }else{
            ans = mid;
            h = mid-1;
        }
    }
    return l;
}


int main(){
    vector<int> arr = {1, 3, 5, 7, 9};
    int k = 6;
    int pos = positionOfInsertInArray(arr, k);
    cout << "Insert position: " << pos << endl;

    return 0;
}
