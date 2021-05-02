#include <iostream>
#include <cstdlib>

using namespace std;

struct Node{
    int data;
    struct Node *next;    
}*first=NULL;



void create(int A[], int n){
    struct Node *last;
    first = (struct Node*) malloc (sizeof (struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;
    int i;

    struct Node *t;
    for (i = 1; i < n; i++) {
        t = (struct Node*) malloc (sizeof (struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void insertHeadNode() {
    Node *t = new Node;
    t->data = 0;
    t->next = first;
    first = t;
}

void insertTailNode(){
    Node *newStop = new Node;
    newStop->data = 3;
    Node *p = new Node;
    p = first;
    while(p->next != NULL){
        p = p -> next;
    }
    p->next = newStop;
}
void display (struct Node *p){
    while(p!=NULL) {
        cout << p->data << endl;
        p = p->next;
    }
}

void deleteFromFirstNode() {
    Node *ptr = first;
    first = first->next;
    if (ptr ->next == NULL)
     delete(ptr);
}

void deleteFromLastNode() {
    Node *ptr, *prev;
    ptr = first;

    while(ptr -> next != NULL) {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = NULL;
    delete(ptr);
}

void deleteFromAGivenNode(int search) {
    Node *ptr, *prev;
    ptr = first;

    while(ptr->next != NULL | prev ->data != search) {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = NULL;
    delete(ptr);
}

void concatenateLinkedList(Node *first2) {
    Node *ptr;
    ptr = first;
    while(ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = first2;
}
int main() {
    int a[3] = {20, 70, 80};
    create(a, 3);
    // insertHeadNode();
    insertTailNode();
    display(first);

    return 0;
}

