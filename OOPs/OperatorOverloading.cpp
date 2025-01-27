#include<iostream>
using namespace std;

class Person{
    public:
    int age;

    Person (int age){
        this->age = age;
    }

    Person operator + (const Person &p){
        return (this->age + p.age);
    }

};

int main(){
    Person p1(20), p2(30);

    Person p3 = p1+p2;

    cout<<p3.age;


    return 0;

}