#include<iostream>
using namespace std;

class Shape{
    private:
    int length;

    public:
    Shape(int l){
        this->length =l; 
        // length l;
    }

    friend void showDetails(Shape s);


};

 void showDetails(Shape s){
    cout<<"the length is "<<s.length;
}


int main(){

    Shape s1(45);
    showDetails(s1);

    return 0;
}