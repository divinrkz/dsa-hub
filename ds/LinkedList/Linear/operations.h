#include <iostream>
#include <string>
#include "./declaration.h"

using namespace std;


Node* create(int data){
    Node* node = new Node;
    node->data = data;
    node->next = NULL;
}



void print(string title, Node* head) {
    Node* node = head;

    cout << title << ": [";

    while (node != NULL) {
        cout << " " << node->data <<  " ";
        node = ptr->next;
    }

    cout << "]" << endl;
}



Node* insert(Node* head, int data) {
    Node* node = new Node;
    node->data = data;
    node->next = NULL;

    head->next = node;
    return head;
}

