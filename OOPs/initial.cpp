#include<iostream>
using namespace std;

class Shape{

    public:
    // int r;
    // int side;


    void  calculateArea(double r){
            cout<< 3.14*r*r <<"\n";
        }

    void calculateArea(double side, bool isSquare){
        if(isSquare)
            cout<<side*side<<"/n";
        
    }

    void calculateArea(double l, double b){
        cout<< l*b <<"\n";
    }

    
    





};
int main(){
    Shape obj;
    obj.calculateArea(4);
    obj.calculateArea(7, true);
    obj.calculateArea(5,6);


    return 0;
}