// // Given array of size n , [0,n] every element will
// // Coming once. Find the missing element.

// #include<iostream>
// #include<vector>
// using namespace std;

// void findmissing(int arr[], int n){

//     vector<int> visited(n+1, 0);

//     for(int i=0; i<n; i++){
//         visited[arr[i]]=1;
//     }
    
//     // for(int i=0; i<temp.size(); i++){
//     //     cout<<temp[i]<< " ";
//     // }
//     // cout<<"\n";
//     for(int i=0; i<visited.size(); i++){
//         if(visited[i]==0)
//             cout<<i<< " ";
//     }


//     // int natural = n*(n+1)/2;
//     // int sum =0;
//     // for(int i=0; i<n; i++){
//     //     sum+=arr[i];
//     // }
//     // cout<<"\nThe missing number is: "<<natural - sum;

// }

// int main(){
//     int n=7;
//     int arr[7]={3,1,2,5,0,6,7};
//     findmissing(arr, n);

//     return 0;
// }




// Given array of size n , [0,n] every element will
// Coming atleast once, one element appearing twice;

// #include<iostream>
// #include<vector>
// using namespace std;

// void findmissing(int arr[], int n){

//     // vector<int> visited(n+1, 0);

//     // for(int i=0; i<n; i++){
//     //     visited[arr[i]]+=1;
//     // }

//     // for(int i=0; i<n;i++){
//     //     if(visited[i]==2)
//     //         cout<<i;
//     // }


//     int s=0;
//     for(int i=0; i<n; i++){
//         s+=arr[i];
//     }
//     int natural = n*(n+1)/2;

//     cout<<s-natural;
    
    

// }

// int main(){
//     int n=7;
//     int arr[7]={3,1,2,5,5,6,7};
//     findmissing(arr, n);

//     return 0;
// }










// #check wheater prime number or not
#include<iostream>
using namespace std;

bool checkPrime(int n){
    if(n<=1)
        return false;

    // for(int i=2; i<=n/2; i++){
    //     if(n%i==0){
    //         return false;
    //     }
    // }
    // return true;


    int sq = sqrt(n);
    for(int i=2; i<=sq; i++){
        if(n%i==0)
            return false;
    }
    return true;

}

int main(){

    // int n=5;
    
    // if(checkPrime(n)){
    //     cout<<"Yes, "<<n<<" is a prime number";
    // }else{
    //     cout<<"No, "<<n<<" is not prime number";
    // }
    for(int i=0; i<50; i++){
        if(checkPrime(i)){
            cout<<"Yes, "<<i<<" is a prime number\n";
        }else{
            cout<<"No,  "<<i<<" is not prime number\n";
        }
    }

    return 0;
}