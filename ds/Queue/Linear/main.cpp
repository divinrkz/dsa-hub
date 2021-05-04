#include <iostream>
#include "./array-operations.h"

using namespace std;






int main () {
	Queue *q = create(10);

	cout << endl;


	cout << "Size of LinearQueue is: "<< getSize(q) << endl;

	enqueue(q, 1);
	enqueue(q, 2);
	enqueue(q, 3);
	enqueue(q, 4);

	cout << "The FirstElement in LinearQueue is: " << getFront(q) << endl;
	cout << "The LastElement in LinearQueue is: " << getRear(q) << endl;

	dequeue(q);

	cout << endl;

    return 0;
}