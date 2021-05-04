#include <iostream>
#include "./operations.h"

using namespace std;



int main () {

	cout << endl;

	DQNode *head = create();  

	cout << "Size of DeQueue is: "<< getSize(head) << endl;

	enqueue(head, 1);
	enqueue(head, 2);
	enqueue(head, 3);
	enqueue(head, 0, "FRONT");


	cout << "The FirstElement in DeQueue is: " << getFront(head) << endl;
	cout << "The LastElement in DeQueue is: " << getRear(head) << endl;

	dequeue(head);
	dequeue(head, "REAR");

	cout << endl;

	
    return 0;
}