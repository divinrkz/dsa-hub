#include <iostream>
#include <string>
#include "./declaration.h"

using namespace std;


Queue* create(int size) {
    Queue *queue = new Queue;
    queue->size = size;
    queue->front = queue->rear = -1;
    queue->Q = new int(queue->size);

    return queue;
}



int getSize(Queue *queue) {
    return queue->size;
}


int getFront(Queue *queue) {
    return queue->Q[queue->front];
}

int getRear(Queue *queue) {
   return queue->Q[queue->rear];
}


void print(string title, Queue *queue) {
    cout << title << ": [ ";
    for (int i = queue->front; i <= queue->rear; i++) {
        cout << queue->Q[i] << " ";
    }

    cout << "]" << endl;
}


void enqueue(Queue *queue, int x) {
    if (queue->rear == queue->size-1) 
        cout << "Overflow";
    if (queue->front == -1 && queue->rear == -1)  {
            queue->front = queue->rear = 0;
    } else {
            queue->rear = queue->rear + 1;
    }

    queue->Q[queue->rear] = x;

     print("LinearQueue Elements after insertion", queue);
}


int dequeue(Queue *queue) {
    int x = -1;
    if (queue->front > queue->rear || queue->front == -1) {
        cout << "Underflow";
    }
    x = queue->Q[queue->front];
    queue->Q[queue->front] = 0;
    queue->front = queue->front + 1;

    print("LinearQueue Elements after insertion", queue);
    
    return x;
}


