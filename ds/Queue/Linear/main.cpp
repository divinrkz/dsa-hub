#include <iostream>

using namespace std;






int main () {
	struct Queue q;
	
	create(&q, 10);
	enqueue(&q, 45.09);
	enqueue(&q, 45.09);
	enqueue(&q, 45.09);

	
	cout<<"All Values: "<<endl;
    display(&q);


    return 0;
}