#include<iostream>
#include<vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};

Node* arrayToLinkedList(vector<int> arr, int n) {
    if (n==0) 
    return NULL;

    Node* head = new Node(arr[0]);
    Node* current = head;
    for (int i = 1; i < n; ++i) {
        current->next = new Node(arr[i]);
        current = current->next;
    }
    return head;
}
void printLL(Node* head){
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertNewNode(Node*& head, int val){
    Node* newNode =  new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}
void insertAferNode(Node* head, int d, int val){
    Node* temp = head;
    Node* newNode = new Node(val);
    while(temp != NULL && temp->data != d){
        temp=temp->next;
    }
    if(temp!=NULL){
        newNode->next=temp->next;
        temp->next=newNode;
    }
}
void deleteNode(Node*& head, int d){
    if (head == NULL) 
        return;
    if (head->data == d){
        head = head->next;
        return;
    }

    Node* temp = head;
    while (temp->next!=NULL && temp->next->data != d) {
        temp = temp->next;
    }
    if (temp->next != NULL) {
        temp->next = temp->next->next;
    }
}




int countNodeLL(Node* head){
    int count=0;
    if(head==NULL)
        return count;
    count=1;
    Node* temp = head; 
    while(temp->next != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

bool searchGivenNode(Node* head, int n){
    if(head==NULL)
        return false;
    Node* temp = head;

    while(temp != NULL){
        if(temp->data == n)
            return true;
        
        temp = temp->next;
    }
    return false;
}

int middleNode(Node* head){
    if(head==NULL) 
        return -1;
    Node* fast = head;
    Node* slow = head;
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;    
        slow = slow->next;
    }
    return slow->data;
}
int returnNthNode(Node* head, int pos){
    if(head == NULL)
        return -1;
    
    Node* temp = head;
    int count = 1;
    while(temp != NULL && count < pos){
        temp = temp->next;
        count++;
    }
    if(temp == NULL)
        return -1;

    return temp->data;
}
 

Node* mergeSortedLL(Node* h1, Node* h2){
    Node* mergedLL = NULL;
    Node* t1 = h1;
    Node* t2 = h2;

    while(t1 != NULL && t2 != NULL){
        if(t1->data < t2->data){
            insertNewNode(mergedLL, t1->data);
            t1 = t1->next;
        } else {
            insertNewNode(mergedLL, t2->data);
            t2 = t2->next;
        }
    }

    while(t1 != NULL){
        insertNewNode(mergedLL, t1->data);
        t1 = t1->next;
    }

    while(t2 != NULL){
        insertNewNode(mergedLL, t2->data);
        t2 = t2->next;
    }

    return mergedLL;
}

void reverse(Node* head){

    Node* prev = NULL;
    Node* temp = head;
    Node* front;
    while(temp != NULL){
        front = temp->next;
        temp->next = prev;

        prev = temp;
        temp = front;
    }

    return prev;

}



int main(){

    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    Node* head = arrayToLinkedList(arr, n);
    insertNewNode(head, 8);
    // printLL(head);


    Node* h1 = arrayToLinkedList({2,5,8,9}, 4);
    printLL(h1);
    Node* h2 = arrayToLinkedList({9,12,15,17}, 4);
    printLL(h2);

    Node* merged = mergeSortedLL(h1, h2);
    printLL(merged);
    


    return 0;
}