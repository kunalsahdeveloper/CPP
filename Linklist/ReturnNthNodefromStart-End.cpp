#include<iostream>
using namespace std;

Linklist* NthNodefromEnd(Linklist* head, int pos){
    int c=0; //counter
    Linklist* t1 = head;
    Linklist* t2 =head;

    while(c < pos && t2 !=NULL){
        c++;
        t2 = t2->next;
    }

    while(t2 != NULL){
        t2= t2->next;
        t1= t1->next;
    }

    return t1;
}

int main(){



    return 0;
}