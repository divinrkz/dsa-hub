#include <iostream>
#include "./operations.h"

int main() {
	
    DeQueue *dqueue = create(10);

    cout << endl;


    insert_at_rear(&dqueue, 0);
    insert_at_rear(&dqueue, 1);
    insert_at_rear(&dqueue, 2);
    insert_at_rear(&dqueue, 3);
    delete_at_front(&dqueue);
    delete_at_rear(&dqueue);
    insert_at_front(&dqueue, 0);
	cout<<"All Values: "<<endl;
    display(&dqueue);

    cout << endl;
    return 0;
}