#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};


Node* HEAD;

void insert(int data) {
    Node* temp = new Node;
    temp->data = data;
    temp->next = HEAD;
    
    HEAD = temp;
}

void print() {
    Node* temp = HEAD;
    while (temp != NULL) {
        
    }
}

int main() {
    HEAD = NULL;

    return 0;
}