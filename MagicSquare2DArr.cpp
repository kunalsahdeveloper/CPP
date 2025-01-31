#include<iostream>
#include<map>
using namespace std;

bool magicSquare(int arr[100][100], int R,int C ){


    int s=0;
    for(int i=0; i<R; i++){
        
        for(int j=0; j<C; j++){
            s+=arr[i][j];
        }
        
    }
    int t;
    for(int i=0; i<R; i++){
        
        for(int j=0; j<C; j++){
            t += arr[i][j];
            if(s!=t)
                return false;
        }
        t=0;
        for(int j=0; j<C; j++){
            t += arr[j][i];
            if(s!=t)
                return false;
        }
        
    }
    return true;

}

int main(){
    int R=3, C=3;
    int arr[R][C] = {
                    {2,7,6},
                    {9,5,1},
                    {4,3,8},
                  };

    
    if(magicSquare(arr, 3,3))
        cout<<"yes its magic square";
    else   
        cout<<"No";
}