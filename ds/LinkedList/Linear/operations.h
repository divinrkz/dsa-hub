#include <iostream>
#include <string>
#include "./declaration.h"

using namespace std;


Node* getNode(int data) {
    Node* node = new Node;
    node->data = data;
    node->next = NULL;
    
    return node;
}

Node* search(Node *head, int data) {
    Node *node = head;
    while(p!=NULL) {
            if (key == p->flightStop.name)
                return p;
        p = p->next;
        }
        return NULL;
}

Node* create(int data){
    Node* node = getNode(data);
    return node;
}



void print(string title, Node* head) {
    Node* node = head;

    cout << title << ": [";

    while (node != NULL) {
        cout << " " << node->data <<  " ";
        node = node->next;
    }

    cout << "]" << endl;
}



Node* insert(Node* head, int data, string position="END") {
    Node* node = getNode(data);

    if (position == "END") {
        node->next = NULL;
        head->next = node;
        print("LinkedList Elements After Insertion at END", head);
    }
    else if (position == "START") {
        node->next = head;
        head = node;
        print("LinkedList Elements After Insertion At HEAD", head);
    } 

    return head;
}



Node* insertMany(Node* head, int array[], int len){
    Node* last = head;
    Node* node;
    

    for (int i = 0; i < len; i++) {
        node = getNode(array[i]);
        last->next = node;
        last = node;
    }

    print("LinkedList Elements After Insertion Many", head);


    return head;
}



Node* replaceAt(Node* head, int search, int data) {
    Node* temp = head;

    while (temp->data != search) {
        temp = temp->next;
    }

    temp->data = data;

    print("LinkedList Elements After Replacing", head);


    return head;
}


Node* insertBefore(Node* head, int search, int data) {
    Node* temp = head;
    Node* previous;

    while (temp->data != search) {
        previous = temp;
        temp = temp->next;
    }

    Node* node = getNode(data);

    previous->next = node;
    node->next = temp;


    print("LinkedList Elements After Inserting before", head);


    return head;
}
