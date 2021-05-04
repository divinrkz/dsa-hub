#include <iostream>
#include <string>
#include "./declaration.h"



DeQueue* create(DeQueue *dqueue, int size) {
    dqueue = new DeQueue;
    dqueue->size = size;
    dqueue->front = dqueue->rear = -1;
    dqueue->DQ = new int(dqueue->size);

    return dqueue;
}



void enqueue(DeQueue *dqueue, int x, string position = "FRONT") { 
    if (position == "FRONT") {
    if (dqueue->rear == dqueue->size-1) 
        cout << "Overflow";
    if (dqueue->front == -1){ 
        dqueue->front = 0; 
        dqueue->rear = 0; 
    } 
    else if (dqueue->front == 0)             
        dqueue->front = (dqueue->size - 1) ; 
    else
        dqueue->front = dqueue->front-1; 
    dqueue->DQ[dqueue->front] = x ;          
    }
    else if (position == "REAR") {
            if (dqueue->rear >= (dqueue->size - 1)) {
        cout << "Overflow" << endl;
    }else {
        if (dqueue->front == -1 && dqueue->rear == -1)  {
            dqueue->front = dqueue->rear = 0;
        } else {
            dqueue->rear = dqueue->rear + 1;
        }
        dqueue->DQ[dqueue->rear] = x;
    }
    }
} 


void insert_at_rear(DeQueue *dqueue, int x) {
    if (dqueue->rear >= (dqueue->size - 1)) {
        cout << "Overflow" << endl;
    }else {
        if (dqueue->front == -1 && dqueue->rear == -1)  {
            dqueue->front = dqueue->rear = 0;
        } else {
            dqueue->rear = dqueue->rear + 1;
        }
        dqueue->DQ[dqueue->rear] = x;
    }
}
void delete_at_front(DeQueue *dqueue) {
    int x = -1;
    if (dqueue->front > dqueue->rear || dqueue->front == -1) 
            cout << "Underflow" << endl;
    else
        x = dqueue->DQ[dqueue->front];
        dqueue->DQ[dqueue->front] = 0;
        dqueue->front = dqueue->front + 1;
}
void delete_at_rear(DeQueue *dqueue) { 
    float x = -1;
    if (dqueue->front > dqueue->rear || dqueue->front == -1) {
        cout << "Underflow";
    }
    if (dqueue->front == dqueue->rear) { 
        dqueue->front = -1; 
        dqueue->rear = -1; 
    } 
    else if (dqueue->rear == 0) 
        dqueue->rear = dqueue->size-1;  
    else
        dqueue->rear = dqueue->rear-1; 
} 
void display(DeQueue *dqueue) {
    cout << "[ ";
    for (int i = dqueue->front; i <= dqueue->rear; i++) {
        cout << dqueue->DQ[i] << " ";
    } 
    cout << "]" << endl;
}
int main() {
	struct DeQueue dqueue;
	create(&dqueue, 10);
    insert_at_rear(&dqueue, 0);
    insert_at_rear(&dqueue, 1);
    insert_at_rear(&dqueue, 2);
    insert_at_rear(&dqueue, 3);
    delete_at_front(&dqueue);
    delete_at_rear(&dqueue);
    insert_at_front(&dqueue, 0);
	cout<<"All Values: "<<endl;
    display(&dqueue);
    return 0;
}