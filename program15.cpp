//queue implementation 
#include<iostream>
using namespace std;

const int sz = 5;
int que[sz];
int tail = -1;
int front = -1;

void enqueue(int element){
	if(tail == sz-1){
		cout<<"queue full"<<endl;
		return;
	}
	if(front == -1){
		front++;
		tail++;
		que[front] = element;
		return;
	}
	tail++;
	que[tail] = element;
	return;
}


int dequeue(){
	if(tail == sz-1){		
		for(int i = 0; i<sz-1; i++){
			que[i] = que[i+1];
		}
		tail--;
		return -1;
	}
	
	if(front>tail){
		cout<<"queue is empty"<<endl;
		return -1;
	}
		
	int ele = que[front];
	front++;
	return ele;
}


void display(){
	for(int i=front; i<=tail; i++){
		cout<<que[i]<<' ';
	}
	cout<<endl;
}


int main(){
	enqueue(50);
	enqueue(18);
	enqueue(20);
	enqueue(18);
	enqueue(10);
	display();
	
	dequeue();
	dequeue();
	display();
	
	enqueue(20);
	display();
}