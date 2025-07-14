#include<iostream>
using namespace std;

bool findduplicate(vector<int> arr){

    for(int i=1; i<arr.size(); i++){
       int key = arr[i];
       int j = i-1;
       while(j>=0 && arr[j] >key){
            arr[j+1] = arr[j];
            j--;
       }
       arr[j+1] = key;
    }

    for(int i=0; i<arr.size()-1; i++){
        if(arr[i]==arr[i+1]){
            return true;
        }
    }
    return false;
}

bool isAnagram(string s1, string s2){
    // if(s1.length() != s2.length()) 
    //     return false;
    
    sort(s1.begin(), s1.end()); 
    sort(s2.begin(), s2.end());
    if(s1==s2){
        return true;
    }else{
        return false;
    }
}

int main(){
    // vector<int> arr = {34,1432,56,833,741,456,345,56};
    vector<int> arr = {34,1432,56,833,741,456,345,};

    cout<<"\n"<<isAnagram("apple", "plpae");
    

    cout<<findduplicate(arr);


    return 0;
}