#include <iostream>
#include <string>
#include "./declaration.h"

using namespace std;


Queue* create(Queue *queue, int size) {
    queue->size = size;
    queue->front = queue->rear = -1;
    queue->Q = new int(queue->size);

    return queue;
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
}


int dequeue(Queue *queue) {
    int x = -1;
    if (queue->front > queue->rear || queue->front == -1) {
        cout << "Underflow";
    }
    x = queue->Q[queue->front];
    queue->Q[queue->front] = 0;
    queue->front = queue->front + 1;

    return x;
}


void display(Queue *queue) {
    for (int i = queue->front; i <= queue->rear; i++) {
        cout << queue->Q[i] << " ";
    }
}
