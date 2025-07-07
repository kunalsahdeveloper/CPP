#include<iostream>
#include<vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

};
Node* arrayToLinkedList(vector<int> arr, int n) {
    if (n==0) 
        return NULL;

    Node* head = new Node(arr[0]);
    Node* current = head;
    for (int i = 1; i < n; ++i) {
        current->next = new Node(arr[i]);
        current->prev = new Node(arr[i]);
        current = current->next;
    }
    current->next=head;
    return head;
}
void printLL(Node* head){
    if (head == NULL) {
        cout << endl;
        return;
    }
    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout<<temp->data;
    cout << endl;
}


int main(){

    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    Node* head = arrayToDLL(arr, n);

    printLL(head);

    // cout<<countNodeLL(head);
    cout<<middleNode(head);
    cout<<returnNthNode(head, 6);


    return 0;
}