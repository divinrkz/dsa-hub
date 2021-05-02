#include <iostream>
#include <string>
#include "./declaration.h"

using namespace std;


Node* create(int data){
    Node* head = new Node;
    head->data = data;
    head->next = NULL;
}



void print(string title, Node* head) {
    Node* ptr = head;

    cout << title << ": [";

    while (ptr != NULL) {
        cout << " " << ptr->data <<  " ";
        ptr = ptr->next;
    }
    
    cout << "]" << endl;
}
