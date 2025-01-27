#include<iostream>
using namespace std;

class Person{
public:
    string name;
    int age;

    void setName(string s){
        this->name = s;
    }
    void setAge(int a){
        this->age = a;
    }

};
class Employee: public Person{
public:
    int empId;

    void setEmpID(int a){
        this->empId = a;
    }


};

class Manager : public Employee{
public:

    void printdetails(){
        cout<<"the person name is "<<name<<" and age is "<<age<<"\n his employee ID is "<<empId;
    }

};



int main() {

    Manager m;

    m.setAge(45);
    m.setEmpID(8947594);
    m.setName("kunal sah");
    m.printdetails();

    return 0;
}


