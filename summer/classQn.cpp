#include<iostream>
using namespace std;

int longestOnes (vector<int> arr){
    int n = arr.size();
    int res=0, count=0;

    for(int i=0; i<n; i++){
        if(arr[i]==1){
            count++;
        }else{
            count=0;
        }
        res = max(res, count);
    }
    return res;
}

int findTarget(vector<int> arr, int target){

    for(int i=0; i<arr.size(); i++){
        if(arr[i]== target){
            return i;
        }
    }
    return -1;

} 

vector<int> intersection(vector<int> arr1, vector<int> arr2){
    

    int n = arr1.size();
    int m = arr2.size();
    vector<int> res;

    int  p1=0, p2=0;
    while(p1<n && p2<m){

        if(arr1[p1]==arr2[p2]){
            res.push_back(arr1[p1++]);
            p2++;
        }
        else if(arr1[p1]<arr2[p2]){
            p1++;
        }else{
            p2++;
        }
    }

    return res;
    

}

int main(){

    // vector<int> arr = {1,1,0,1,1,1,0,1,1,1,1,1,0,1,1};
    vector<int> arr = {1,1,1};
    cout<<longestOnes(arr);

    // vector<int> arr1 = {4,2,5,321,22,3,21};
    // cout<<findTarget(arr1, 5);


    // vector<int> a1 = {2,4,6,7,7,10,13,17,19};
    // vector<int> a2 = {6,7,8,13,17, 21};

    // vector<int> solve = intersection(a1, a2);
    // for(int i=0; i<solve.size(); i++){
    //     cout<<solve[i]<<endl;
    // }

    return 0;
}