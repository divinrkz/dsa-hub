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
    insert(HEAD, 0, "START");
    cout << "Total LinkedList Elements: " << getTotal(HEAD) << endl; 
    replaceAt(HEAD, 2, 400);
    insertBefore(HEAD, 2, 400);

    cout << endl;
    
    return 0;
}

