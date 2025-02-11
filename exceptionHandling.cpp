#include<iostream>
using namespace std;


int main(){


    try
    {
        int a =10;
        int b = 0;

       if(b==0)
            throw ("Cannot divided by zero");

        int res = a/b;
        
    cout<<res<<" "<<endl;

    }
    catch(const char* e){
        cout<< e << '\n';
    }
    

    
    cout<<"shdhf dosdf ";



    return 0;
}