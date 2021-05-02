#include <iostream>
#include "operations.h"
using namespace std;



Node* HEAD = NULL;


int main() {
    HEAD = create(1);
    print("LinkedList Elements", HEAD);

    return 0;
}

