#include <iostream>
#include <string>
#include "./operations.h"

using namespace std;

struct PQueue{
  int priority;
  int data;
  PQueue *next;
}*front=NULL, *rear=NULL, *temp;


int getFront() {
    return front->data;
}


int getRear() {
    return rear->data;
}

void print(string title){
  PQueue *pqueue;
  pqueue = front;
  if (front == NULL) {
    cout << "Underflow" << endl;
    return;
  }

  cout << title << ": " << endl<< "[" << endl;

  while (pqueue != NULL){
      cout << "\t(Data => " << pqueue->data << ", Priority => " << pqueue->priority <<" )," << endl;
      pqueue = pqueue->next;
  }

  cout << "] "<< endl;
}

void enqueue(int value, int p){
  PQueue *pqueue;
  
  temp = new PQueue;
  temp->data = value;
  temp->priority = p;

  if (front == NULL || p < front->priority){
    temp->next = front;
    front= temp;
  }
  else{
    pqueue = front;
    while (pqueue->next != NULL && pqueue->next->priority <= p)
      pqueue = pqueue->next;
    temp->next = pqueue->next;
    pqueue->next = temp;
  }

  print("PriorityQueue Elements after insertion");
}

void dequeue(){
  if (front == NULL) cout << "Underflow\n";

  temp = front;
  front = front->next;
  delete(temp);

  print("PriorityQueue Elements after insertion");

}



int main()
{

	cout << endl;

	enqueue(1, 1);
	enqueue(2, 2);
	enqueue(3, 3);
	enqueue(0, 0);

	cout << "The FirstElement in PriorityQueue is: " << getFront() << endl;
	cout << "The LastElement in PriorityQueue is: " << getRear() << endl;

	dequeue();
	dequeue();

	cout << endl;
  return 0;
}
