#include <iostream>
#include "./operations.h"

using namespace std;



int main () {

    int array[] = {1, 2, 3, 4, 5};

    int len = sizeof(array) / sizeof(array[0]);

    print("Array elements", array, len);
    cout << "Array Length: " <<  len << endl;

    insert(array, len, 0, 100);

    return 0;
}