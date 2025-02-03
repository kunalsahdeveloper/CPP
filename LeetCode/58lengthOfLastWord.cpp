#include<iostream>
using namespace std;

int  lengthofLastWord(string s){

        int ans = 0; 
        int j = s.length()-1;

        while(j >= 0 && s[j]==' '){
            j--;
        }
        for(int i=j; i>=0; i--){
            if(s[i] == ' ') return ans;

            ans++;
        }

        return ans;


}


int main(){

        lengthofLastWord("Hello World");
        
        // ans = words.at(words.size()-1);
        // return ans.length();


    return 0;
}