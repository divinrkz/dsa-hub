#include <iostream>
#include "./linked-list-operations.h"

using namespace std;



int main () {

	cout << endl;

	QNode *front = NULL;  
	QNode *rear = NULL;   

    
	cout << "Size of LinearQueue is: "<< getSize(front) << endl;

	enqueue(front, rear, 1);
	enqueue(front, rear, 2);
	enqueue(front, rear, 3);
	enqueue(front, rear, 4);
	enqueue(front, rear, 5);


	cout << "The FirstElement in LinearQueue is: " << getFront(front) << endl;
	cout << "The LastElement in LinearQueue is: " << getRear(rear) << endl;

	dequeue(front, rear);

	cout << endl;

	
    return 0;
}