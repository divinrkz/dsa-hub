#include <iostream>
#include "./operations.h"

using namespace std;



int main () {

    int array1[] = {1, 2, 3, 4};

     print("Array elements", array1, 5);
    //  showArrayContiguity("Array memory locations", array1, 5);
    //  insertAtBeginning(array1, 5, 4, 0);
    //  insertAtAGivenIndex(array1, 5, 4, 4, 5);
    //  insertBeforeAGivenIndex(array1, 5, 4, 1, 5);
    insertX(array1, 4, 5, 2);

    return 0;
}