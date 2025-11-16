//linked list insertion and deletion 
#include <iostream>
using namespace std; 

struct node{
    int data;
    node* next;
};

node* createNode(int value){
    node* newNode= new node;
    newNode->data=value;
    newNode->next=nullptr;
    return newNode;
}

void insertAtBeginning(node*& head, int val){
    node* newNode= createNode(val);
    newNode->next= head;
    head=newNode;
}

void insertAtEnd(node*& head, int val){
    node* newNode= createNode(val);
    if(head==nullptr){
        head=newNode;
        return;
    }
    node* temp=head;
    while (temp->next!=nullptr)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}
void insertAtPosition(node*& head, int val, int pos){
    if(pos==1){
        insertAtBeginning(head, val);
        return;
    }
    node* newNode = createNode(val);
    node* temp= head;
    for(int i=1; i<pos-1 && temp!=nullptr; i++){
        temp=temp->next;
    }
    if(temp=nullptr){
        cout<<"Position out of range"<<endl;
        delete newNode;
        return;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}
// Delete head
void deleteHead(node*& head) {
    if (head == nullptr) return;
    node* temp = head;
    head = head->next;
    delete temp;
}

// Delete at given position (1-based index)
void deleteAtPosition(node*& head, int position) {
    if (head == nullptr) return;

    if (position == 1) {
        deleteHead(head);
        return;
    }

    node* temp = head;
    for (int i = 1; i < position - 1 && temp->next != nullptr; i++) {
        temp = temp->next;
    }

    if (temp->next == nullptr) {
        cout << "Position out of range!" << endl;
        return;
    }

    node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;
}

// Delete last node
void deleteLast(node*& head) {
    if (head == nullptr) return;

    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;
}

void printList(node* head){
    node* temp=head;
    while(temp!= nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head = nullptr;
    insertAtBeginning(head, 30);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 10);
    printList(head); // 10 -> 20 -> 30 -> NULL

    // Insert at end
    insertAtEnd(head, 40);
    insertAtEnd(head, 50);
    printList(head); // 10 -> 20 -> 30 -> 40 -> 50 -> NULL

    // Insert at position
    insertAtPosition(head, 25, 3);
    printList(head); // 10 -> 20 -> 25 -> 30 -> 40 -> 50 -> NULL

    // Delete head
    deleteHead(head);
    printList(head); // 20 -> 25 -> 30 -> 40 -> 50 -> NULL

    // Delete at position
    deleteAtPosition(head, 3);
    printList(head); // 20 -> 25 -> 40 -> 50 -> NULL

    // Delete last
    deleteLast(head);
    printList(head); // 20 -> 25 -> 40 -> NULL

    return 0; 
}