#include<iostream>
using namespace std;

struct Node {
	int data;
	struct Node* link;
};

struct CircularQueue {
	struct Node *front, *rear;
};


void insert(CircularQueue* cq, int value)
{
	struct Node* temp = new Node;
	temp->data = value;
	if (cq->front == NULL)
		cq->front = temp;
	else
		cq->rear->link = temp;
	cq->rear = temp;
	cq->rear->link = cq->front;
}


int deQueue(CircularQueue* cq)
{
	if (cq->front == NULL) {
		cout<<"Queue is empty"<<endl;
		return 0;
	}
	// If this is the last node to be deleted
	int value; // Value to be dequeued
	if (cq->front == cq->rear) {
		value = cq->front->data;
		delete(cq->front);
		cq->front = NULL;
		cq->rear = NULL;
	}
	else 
	{
		struct Node* temp = cq->front;
		value = temp->data;
		cq->front = cq->front->link;
		cq->rear->link = cq->front;
		delete(temp);
	}
	return value;
}
// Function displaying the elements of Circular Queue
void displayQueue(struct CircularQueue* cq)
{
	struct Node* temp = cq->front;
    cout<<"\nElements in Circular Queue are: ";
    while (temp->link != cq->front) {
        cout<<" "<< temp->data;
        temp = temp->link;
    }
    cout<<" "<<temp->data;
}
int main()
{
	CircularQueue* cq = new CircularQueue;
	cq->front = cq->rear = NULL;

	insert(cq, 14);
	insert(cq, 22);
	insert(cq, 6);
	displayQueue(cq);

	cout<<"\nDeleted value = "<<deQueue(cq);
	cout<<"\nDeleted value = "<<deQueue(cq);
	displayQueue(cq);
    cout<<"\n\nAdded 9 & 20 in a queue"<<endl;
	insert(cq, 9);
	insert(cq, 20);
	displayQueue(cq);
	return 0;
}