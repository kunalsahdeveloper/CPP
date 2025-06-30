#include<iostream>
using namespace std;

int sqroot(int m){

    int l = 1, h = m, ans = -1;
    while(l <= h){
        int mid = (l + h) / 2;
        int sq = mid * mid;
        if(sq == m){
            return mid;
        }
        else if(sq < m){
            ans = mid;
            l = mid + 1;
        }
        else{
            h = mid - 1;
        }
    }
    return ans;
    
}


int main(){
    cout<<sqroot(11);

    return 0;
}