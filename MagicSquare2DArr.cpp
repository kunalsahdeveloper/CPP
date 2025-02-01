#include<iostream>
#include<map>
using namespace std;

bool magicSquare(int arr[100][100], int R,int C ){

    if(R !=C)
     return false;
    
    bool is

    int originalSum=0;
    
        
    for(int j=0; j<C; j++){
        s+=arr[i][j];
    }
    
    
    
    for(int i=0; i<R; i++){
        int currSum=0;

        for(int j=0; j<C; j++){
            currSum += arr[i][j];
            if(originalSum != currSum)
                return false;
        }
    }
    for(int i=0; i<R; i++){
        int currSum = 0;

        for(int j=0; j<C; j++){
            currSum += arr[i][j];
            if(originalSum != currSum)
                return false;
        }
    }

        
        
    
    return true;

}

int main(){
    int R=3, C=3;
    int arr[100][100] = {
                    {2,7,6},
                    {9,5,1},
                    {4,3,8},
                  };

    
    if(magicSquare(arr, 3,3))
        cout<<"yes its magic square";
    else   
        cout<<"No";
}