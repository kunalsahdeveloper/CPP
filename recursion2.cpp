#include<iostream>
using namespace std;


// int digitCount(int n){
    
//     if( n == 0 )return 0;

//     return 1 + digitCount(n/10);
// }

// void printSubSequence(String s){



// }
// neetcode.io


// int power(int a, int n){

//     if(n==0) return 1;

//     return a*power(a, n-1);

// }

int fib(int n ){

    if(n==0)
        return 0;

    if(n==1)
        return 1;
    
    return fib(n-1) + fib(n-2);
}



int main(){
    
    
    // cout<<digitCount(9795);
    // cout<<power(2,5);

    cout<<fib(5);


    return 0;
}