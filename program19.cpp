//wap to create a stack of 10 elements using linked list

#include <iostream>
using namespace std;

struct Stack
{
    int data;
    Stack* next;
};
Stack* top=nullptr;

void push(int val){
    Stack* newS= new Stack;
    newS->data=val;
    newS->next=top;
    top=newS;
}

void pop(){
    Stack* temp= top;
    top->next=nullptr;
}


void display(){
    Stack* temp= top;
    while(temp!= nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}


int main(){
    int size=10;
    int value;
    for(int i=0;i<size;i++){
        cin>>value;
        push(value);
    }
    display();
    pop();
    display();
    return 0; 
}

