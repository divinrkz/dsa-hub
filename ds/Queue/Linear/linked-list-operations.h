#include <iostream>
#include <string>
#include "./declaration.h"




int getSize(QNode *front)  {  
    QNode *qnode;  
    qnode = front;  
    int count = 0;    

    while(qnode != NULL) {  
        count++;
        qnode = qnode -> next;
    }  

    return count;
}  


int getFront(QNode *front) {
    return front->data;
}

int getRear(QNode *rear) {
    return rear->data;
}

void print(string title, QNode *front)  {  
    QNode *qnode;  
    qnode = front;      
  
    cout << title << ": [ " << endl;  
    
    while(qnode != NULL) {  
            cout << qnode->data << " ";  
            qnode = qnode -> next;
    }  

    cout << "]" << endl;
}  


void enqueue(QNode *front, QNode *rear, int data)  {  
    QNode *qnode;  
    int item;   
      
    qnode = new QNode;

    if(qnode == NULL){  
        cout << "Overflow" << endl;  
        return;  
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



