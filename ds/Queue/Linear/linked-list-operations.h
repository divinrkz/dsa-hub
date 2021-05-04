#include <iostream>
#include <string>
#include "./declaration-ll.h"




int getSize(QNode *front)  {  
    QNode *qnode;  
    qnode = front;  
    int count = 0;    

    if (qnode == NULL) 
        return count;

    while(qnode != NULL) {  
        count++;
        qnode = qnode -> next;
    }  

    return count;
}  


int getFront(QNode *front) {
    if (front == NULL) {
        return -1;
    }
    return front->data;
}

int getRear(QNode *rear) {
    if (rear == NULL) {
        return -1;
    }
    return rear->data;
}

void print(string title, QNode *front)  {  
    QNode *qnode;  
    qnode = front;      
  
    cout << title << ": [ ";  
    
    while(qnode != NULL) {  
            cout << qnode->data << " ";  
            qnode = qnode -> next;
    }  

    cout << "]" << endl;
}  


QNode* enqueue(QNode *front, QNode *rear, int data)  {  
    QNode *qnode;  
    int item;   
      
    qnode = new QNode;

    if(qnode == NULL){  
        cout << "Overflow" << endl;  
        return NULL;  
    }  

    else {    
        qnode->data = data;  
        if(front == NULL)  {  
            front = qnode;  
            rear = qnode;   
            front -> next = NULL;  
            rear -> next = NULL;  
        } else {  
            rear -> next = qnode;  
            rear = qnode;  
            rear->next = NULL;  
        }  
    }  


    print("LinearQueue elements after insertion", front);

    return qnode;
}     


void dequeue (QNode *front, QNode *rear)  {  
    QNode *qnode;  
    if(front == NULL){  
        cout << "Underflow" << endl;  
        return;  
    }  
    else {  
        qnode = front;  
        front = front -> next;  
        delete(qnode);  
    }  

    print("LinearQueue elements after insertion", front);

}  



