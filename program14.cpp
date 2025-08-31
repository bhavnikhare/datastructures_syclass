//stack implementation 

#include <iostream>
using namespace std;

const int s=10;
int stck[s];
int pointer=-1;

void push(int el){
    if (pointer==s-1){
        cout<<"stack is full"<<endl;
    }
    else{
        pointer++;
        stck[pointer]=el;
    }
}
   
void pop(){
    int el=stck[pointer];
    pointer--;
}
void display(){
        for (int i=0; i<=pointer; i++){
        cout<<stck[i]<<" ";  
    }
    cout<<endl;
}
int main(){
    push(5);
    push(11);
    display(); 
    pop();
    display();
    
    return 0; 
}
