#include <iostream>
#include "operations.h"
using namespace std;



Node* HEAD = NULL;


int main() {
    cout << endl;

    int array[] = {2, 3, 4, 5};
    int len = sizeof(array) / sizeof(array[0]);

    HEAD = create(1);
    print("LinkedList Elements", HEAD);
    
    insert(HEAD, 2);
    insertMany(HEAD, array, len);
    insertHeadNode(HEAD, 0);

    cout << endl;
    
    return 0;
}

