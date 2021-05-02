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
        node = node->next;
    }

    cout << "]" << endl;
}



Node* insert(Node* head, int data, string position="END") {
    Node* node = new Node;
    node->data = data;

    if (position == "END") {
        node->next = NULL;
        head->next = node;
        print("LinkedList Elements After Insertion at END", head);
    }
    else if (position == "START") {
        node->next = head;
    } 
    return head;
}



Node* insertHeadNode(Node* head, int data) {
    Node *node = new Node;
    node->data = data;
    node->next = head;
    head = node;

    print("LinkedList Elements After Insertion At HEAD", head);

    return head;

}


Node* insertMany(Node* head, int array[], int len){
    Node* last = head;
    Node* node;
    

    for (int i = 0; i < len; i++) {
        node = new Node;
        node->data = array[i];
        node->next = NULL;
        last->next = node;
        last = node;
    }

    print("LinkedList Elements After Insertion Many", head);


    return head;
}