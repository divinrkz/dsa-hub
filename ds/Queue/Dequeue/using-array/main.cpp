#include <iostream>
#include "./operations.h"

int main() {
	
	DeQueue *dq = create(10);

	cout << endl;

	cout << "Size of DeQueue is: "<< getSize(dq) << endl;

	enqueue(dq, 1);
	enqueue(dq, 2);
	enqueue(dq, 3);
	enqueue(dq, 0, "FRONT");

	cout << "The FirstElement in DeQueue is: " << getFront(dq) << endl;
	cout << "The LastElement in DeQueue is: " << getRear(dq) << endl;

	dequeue(dq);
	dequeue(dq, "REAR");

	cout << endl;

    return 0;
}