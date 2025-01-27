#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;

    Person(){
        name="unknown";
        age=0;
    }
    Person(string n){
        name = n;
        age = 0; 
    }
    Person(string n, int a){
        name=n;
        age=a;
    }



    Person(const Person &p){
        name = p.name;
        age = p.age;
    }


};



int main(){

    Person p1;
    Person P2("kunal");
    Person p3("kunal", 20);

    Person p4 = p3;

    cout<<p4.name<<" "<<p4.age<<endl;


    return 0;
}