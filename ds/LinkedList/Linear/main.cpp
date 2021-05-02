#include <iostream>
#include "operations.h"
using namespace std;



Node* HEAD = NULL;


int main() {
    cout << endl;

    HEAD = create(1);
    print("LinkedList Elements", HEAD);

    cout << endl;
    
    return 0;
}

