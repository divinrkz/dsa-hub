#include <iostream>
#define SIZE 5
using namespace std;

struct Queue {
	int data[SIZE];
	int front;
	int rear;
}*first=NULL;

void initializeQueue(){
	first = new Queue();
	first->front = -1;
	first->rear = -1;
}

//check if queue is full
bool isFull() {
    if (first->front == 0 && first->rear == SIZE - 1) {
      return true;
    }
    if (first->front == first->rear + 1) {
      return true;
    }
    return false;
}
  
  //check if the queue is empty
  bool isEmpty() {
    if (first->front == -1)
      return true;
    else
      return false;
  }
  
  void insertIntoQueue(int newElement){
  	if (isFull()) {
      cout << "Queue is full" << endl;
    } else {
      if (first->front == -1) first->front = 0;
      first->rear = (first->rear + 1) % SIZE;
      first->data[first->rear] = newElement;
      cout << endl << "Inserted " << newElement << endl;
    }
  }
  
  void display() {
    if (!first || isEmpty()) {
      cout << endl << "Queue is empty" << endl;
    } else {
      cout << endl << "Data: ";
      int i;
      for (i = first->front; i != first->rear; i = (i + 1) % SIZE){
        cout << first->data[i] << " ";
      }
      cout << first->data[i] << endl;
    }
  }
  
  
  void deleteElement(){
    if (!first || isEmpty()) {
      cout << "Queue is empty" << endl;
    } else {
		int element;
    	element = first->data[first->front];
      	if (first->front == first->rear) {
        	first->front = -1;
        	first->rear = -1;
      	}else {
        	first->front = (first->front + 1) % SIZE;
      	}
      	cout << "Deleted " << element << endl;
    }
  }

int main(){
	initializeQueue();
	insertIntoQueue(10);
	insertIntoQueue(13);
	insertIntoQueue(12);
	insertIntoQueue(21);
	insertIntoQueue(54);
	display();
	deleteElement();
	deleteElement();
	display();
}