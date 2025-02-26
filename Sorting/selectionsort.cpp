// #include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

void sorting (int* arr, int n){
    
    int mini;
    for(int i=0; i<n; i++){
        mini = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[mini])
                mini = j;
        }
        swap(arr[mini], arr[i]);
    }

}

int main() {
	  int n;
      cout<<"enter size: ";
	  cin>>n;
	  
	  vector<int> arr(n);
	  for(int i=0; i<n; i++){
	      cin>>arr[i];
	  }
	//   int arr[]={5,5,23,3431,2343,2};
	  sorting(arr, 6);

      for(int i=0; i<6; i++)
        cout<<arr[i]<<endl;
    
    
}
