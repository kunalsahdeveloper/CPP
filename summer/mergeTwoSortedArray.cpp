#include<iostream>
#include<vector>
using namespace std;

vector<int> mergeTwoSortedArray(vector<int> a, vector<int> b){
    int n = a.size();
    int m = b.size();
    
    vector<int> ans(n + m);
    int i = 0, j = 0, k = 0;
    while(i < n && j < m){
        if(a[i] < b[j]){
            ans[k++] = a[i++];
        }else{
            ans[k++] = b[j++];
        }
    }
    while(i < n){
        ans[k++] = a[i++];
    }
    while(j < m){
        ans[k++] = b[j++];
    }
    
    return ans;
}



int main(){

    vector<int> a ={2,6,7};
    vector<int> b ={1,5,9};

    vector<int> ans = mergeTwoSortedArray(a,b);
    for(int i=0; i<6; i++){
        cout<<ans[i]<<endl;
    }


    return 0;
}