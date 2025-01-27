#include<iostream>
using namespace std;


void subSeq(string s, int i, string curr){

    if(i==s.length()){
        cout<<curr<<" ";
        return ;
    }

    subSeq(s, i+1, curr + s[i]);
    subSeq(s, i+1, curr);


}

int main(){

    subSeq("helto", 0,"");


    return 0 ;
}