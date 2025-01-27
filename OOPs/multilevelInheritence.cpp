#include<iostream>
using namespace std;

class Vehicle{
public:
    Vehicle(){
        cout<<"constructor of vehicle"<<endl;
    }

    void displayVehicle(){
        cout<<"display of Vehicle"<<endl;
    }

};

class Car : public Vehicle{
public:
    Car(){
        cout<<"constructor of car"<<endl;
    }

    void displayCar(){
        cout<<"display of Car"<<endl;
    }

};
class ElectricCar : public Vehicle{
public:
    ElectricCar(){
        cout<<"constructor of electricCar"<<endl;
    }
protected:
    void displayElectricCar(){
        cout<<"display of Electric"<<endl;
    }
};


int main(){

    Car c1;
    ElectricCar ec1;

    ec1.displayElectricCar();
    return 0;
}