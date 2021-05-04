#include <iostream>
#include <string>
#include "./declaration.h"



DeQueue* create(int size) {
    DeQueue *dqueue = new DeQueue;
    dqueue->size = size;
    dqueue->front = dqueue->rear = -1;
    dqueue->DQ = new int(dqueue->size);

    return dqueue;
}


int getSize(DeQueue *dqueue) {
    return dqueue->size;
}


int getFront(DeQueue *dqueue) {
    return dqueue->DQ[dqueue->front];
}

int getRear(DeQueue *dqueue) {
   return dqueue->DQ[dqueue->rear];
}


void print(string title, DeQueue *dqueue) {
    cout << title << ": [ ";

    for (int i = dqueue->front; i <= dqueue->rear; i++) {
        cout << dqueue->DQ[i] << " ";
    } 
    cout << "]" << endl;
}


DeQueue* enqueue(DeQueue *dqueue, int x, string position = "REAR") { 
    if (position == "FRONT") {
        if (dqueue->rear == dqueue->size-1)  cout << "Overflow";

        if (dqueue->front == -1){ 
            dqueue->front = 0; 
            dqueue->rear = 0; 
        } else if (dqueue->front == 0)             
            dqueue->front = ((dqueue->size) - 1) ; 
        else
            dqueue->front = (dqueue->front) - 1; 

        dqueue->DQ[dqueue->front] = x;   
    }
    else if (position == "REAR") {
        if (dqueue->rear >= (dqueue->size - 1)) cout << "Overflow" << endl;
        else {
            if (dqueue->front == -1 && dqueue->rear == -1)  {
                dqueue->front = dqueue->rear = 0;
            } else {
                dqueue->rear = (dqueue->rear) + 1;
            }
            dqueue->DQ[dqueue->rear] = x;
        }
    }

    print("Dequeue Elements after insertion", dqueue);
    
    return dqueue;       
} 



void dequeue(DeQueue *dqueue, string position = "FRONT") { 
    if (position == "FRONT") {
        int x = -1;

        if (dqueue->front > dqueue->rear || dqueue->front == -1) 
            cout << "Underflow" << endl;
        else
            x = dqueue->DQ[dqueue->front];

        dqueue->DQ[dqueue->front] = 0;
        dqueue->front = dqueue->front + 1;  
    }
    else if (position == "REAR") {
        int x = -1;
        if (dqueue->front > dqueue->rear || dqueue->front == -1)
            cout << "Underflow";

        if (dqueue->front == dqueue->rear) { 
            dqueue->front = -1; 
            dqueue->rear = -1; 
        } 
        else if (dqueue->rear == 0) 
            dqueue->rear = dqueue->size-1;  
        else
            dqueue->rear = dqueue->rear-1; 
    }

    print("Dequeue ELements after insertion", dqueue);
     
} 



