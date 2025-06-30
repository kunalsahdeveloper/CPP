#include<iostream>
using namespace std;

void check(int n){
    if(n%2==0){
        cout<<"even"<<endl;
    }else{
        cout<<"odd"<<endl;
    }

    if(n==0){
        cout<<"Zero"<<endl;
    }else if(n>0){
        cout<<"Positive"<<endl;
    }else{
        cout<<"Negative"<<endl;
    }

}

void checkgreater(int n, int m){
    if(n==m){
        cout<<"both are equal"<<endl;
    }else if(n>m){
        cout<<n<<" is greater"<<endl;
    }else{
        cout<<m<<" is greater"<<endl;
    }
}


int main(){

    

    return 0;
}