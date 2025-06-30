#include<iostream>
using namespace std;

int gcd(int n, int m){

    if(n==0 || m==0){
        return max(n,m);
    }

    for(int i=min(n,m); i>=1; i--){
        if(n%i==0 && m%i==0){
            return i;
        }

    }
    return -1;

}

int gcdArr(vector<int> arr){
    int res=0;
    for(int i=0; i<arr.size()-1; i++){
        res = gcd(res, arr[i+1]);
    }
    return res;
}

int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}
//note
    // a*b = lcm * gcd
    //

int main(){

    cout<<gcd(40,15)<<"\n";
    cout<<lcm(40,15);

    return 0;
}