// doubly linked list 

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;
};
struct DoublyLinkedList{
    Node* head;

    DoublyLinkedList() {
        head = nullptr;
    }
    void insertAtBeginning(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->prev = nullptr;
        newNode->next = head;

        if (head != nullptr)
            head->prev = newNode;

        head = newNode;
    }

    
    void insertAtEnd(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;
        newNode->prev = nullptr;

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr)
            temp = temp->next;

        temp->next = newNode;
        newNode->prev = temp;
    }

    
    void deleteNode(int value) {
        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head;

        // Find node with matching value
        while (temp != nullptr && temp->data != value)
            temp = temp->next;

        if (temp == nullptr) {
            cout << "Value " << value << " not found in list\n";
            return;
        }

        if (temp == head)
            head = temp->next;

        if (temp->next != nullptr)
            temp->next->prev = temp->prev;

        if (temp->prev != nullptr)
            temp->prev->next = temp->next;

        delete temp;
        cout << "Node with value " << value << " deleted\n";
    }

    // Display forward
    void displayForward() {
        Node* temp = head;
        cout << "List (Forward): ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Display backward
    void displayBackward() {
        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr)
            temp = temp->next;

        cout << "List (Backward): ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
};


int main() {
    DoublyLinkedList d;
    d.insertAtBeginning(7);
    d.insertAtEnd(9);
    d.insertAtEnd(15);
    d.insertAtEnd(22);
    d.insertAtEnd(45);
    d.displayForward();
    d.insertAtEnd(36);
    d.displayForward();
    d.deleteNode(9);
    d.displayForward();
    d.deleteNode(15);
    d.deleteNode(22);
    d.displayBackward();
    d.insertAtBeginning(12);
    d.displayForward();
    return 0;
}