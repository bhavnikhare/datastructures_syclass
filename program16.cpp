//circular queue

#include <iostream>
using namespace std;

const int sz = 5;
int que[sz];
int front = -1, tail = -1;

void enqueue(int element) {
    if ((tail + 1) % sz == front) {
        cout << "Queue full" << endl;
        return;
    }


    if (front == -1) {
        front = 0;
        tail = 0;
    } 
	else {
        tail = (tail + 1) % sz;
    }

    que[tail] = element;
}

int dequeue() {
    if (front == -1) {
        cout << "Queue is empty" << endl;
        return -1;
    }

    int ele = que[front];

    if (front == tail) {
        front = tail = -1;
    }
	else {
        front = (front + 1) % sz;
    }

    return ele;
}

void display() {
    if (front == -1) {
        cout << "Queue is empty" << endl;
        return;
    }

    int i = front;
    while (true) {
        cout << que[i] << " ";
        if (i == tail) break;
        i = (i + 1) % sz;
    }
    cout << endl;
}

int main() {
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