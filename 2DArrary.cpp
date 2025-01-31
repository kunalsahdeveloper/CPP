#include<iostream>
using namespace std;



int main(){
    // int arr[4][4] = {
    //                 {2,4,9,8},
    //                 {1,2,3,4},
    //                 {4, 4, 6,7},
    //                 {18,19,24,9}
    //               };

    int R=4, C=4;
    int arr[R][C] = {
                    {2,4,9,8},
                    {1,2,3,4},
                    {4, 4, 6,7},
                    {18,19,24,9}
                  };


        // for(int i=0; i<R; i++){
        //     for(int j=0; j<C; j++){
        //         cout<<arr[i][j]<<" ";
        //     }
        //     cout<<"\n";;
        // }

        //Colum wise
        // for(int i=0; i<4; i++){
        //     for(int j=0; j<4; j++){
        //         cout<<arr[j][i]<<" ";
        //     }
        //     cout<<"\n";;
        // }
        cout<<endl;

        // diagonal
        for(int i=0; i<4; i++){
            for(int j=0; j<4; j++){
                if(i==j)
                    cout<<arr[j][i]<<" ";

            }
        }

        //Anti Diagonal print
        
        // i= 0 ---> R-1;
        // j= C-1 ---> 0;
        // (0,3),(1,2),(2,1),(3,0)
        // i++;
        // J--

        int i=0, j=C-1;
        while(i<R && j>=0){
            cout<<arr[i][j];
            i++;
            j--;
        }


    return 0;
}