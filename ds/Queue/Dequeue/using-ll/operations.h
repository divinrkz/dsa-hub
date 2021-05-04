#include <iostream>
#include <string>
#include "./declaration.h"




int getSize(DQNode *head)  {  
    DQNode *qnode = head;  
    
    int count = 0;    

    if (qnode == NULL) 
        return count;

    while(qnode != NULL) {  
        count++;
        qnode = qnode -> next;
    }  

    return count;
}  


int getFront(DQNode *head) {
    if (head == NULL) {
        return -1;
    }
    return head->data;
}

int getRear(DQNode *head) {
    DQNode *qnode = head;  


    if (qnode == NULL) {
        return -1;
    }

    while(qnode != NULL) { 
        qnode = qnode -> next;
    }  

    return qnode->data;
}



void print(string title, DQNode *head) {
    DQNode *dqnode = head;

    cout << title << ": [";
    while (dqnode != NULL){
        cout << dqnode->data<< " ";
        dqnode = dqnode->next;
    }
    cout << "]" << endl;
}


DQNode* enqueue(DQNode *head, int value, string position="REAR"){
    if (position == "FRONT") {
        DQNode *dqnode = new DQNode;
        dqnode->data = value;
        dqnode->next = head;
        head = dqnode;
    } else if (position == "REAR") {
        DQNode *temp = new DQNode;
        temp->data = value;
        temp->next = NULL;
        DQNode *dqnode = head;
        while (dqnode->next != NULL) dqnode = dqnode->next;
        dqnode->next = temp;
    }

    return head;
}

void dequeue(DQNode *head, string position="FRONT"){
    if (position == "FRONT") {
        DQNode  *temp = new DQNode;
        temp = first;
        first = first->next;
        free(temp);
    }else if (position == "REAR") {
        DQNode *prev = new DQNode;
        DQNode *dqnode = first;
        if (dqnode->next == NULL) {
            first = NULL;
        } else {
            while (dqnode->next != NULL) {
                prev = dqnode;
                dqnode = dqnode->next;
            }
            prev->next = NULL;
            free(dqnode);
        }
    }
}