#include<iostream>
#include<string>
using namespace std;



// void print(int n){
//     if(n<0)
//         return;
//     cout<<n;
//     print(n-1);

// }

// void print(int n){
//     if(n<0)
//         return;

    
//     print(n-1);
//     cout<<n;
// }

// void print(int n){
//     if(n==0) return ;

//     cout<<n<<"x";
//     print(n-1);
    

// }

// int fact(int n){
//     if(n==1) return 1;
    
//     return n*fact(n-1);
    
// }


// int sumofDigits(int n){

//     if(n==0) return 0;

//     int rem = n%10;
    
//     return rem + sumofDigits(n/10);
// }

// bool checkPalindrome(string s, int st, int end){

//     if(st>=end) return true;


//     if(s[st] != s[end]) return false;
    
//     return checkPalindrome(s, st++, end--);
    
// }



int binarySearch (int arr[],int element, int st, int end){

    if(st >= end )  return -1;

    int mid = st + (end-st)/2;

    if(arr[mid] == element)
        return mid;
    if(arr[mid] > element){
        return binarySearch(arr, element, st, mid-1);
    }else{
        return binarySearch(arr, element, mid+1, end);
    }


}



int main(){

    // int n = 57393;


    // int v=sumofDigits(n);
    // cout<<v;

    // if(checkPalindrome("beeb", 0, 3)){
    //     cout<<"Yes its palindrome";
    // }else{
    //     cout<<"No!, its not palindrome";
    // }


    int arr[] = {2,5,8,10,16,35,75};

    cout<<binarySearch(arr, 9, 0, 6);




    return 0;
}