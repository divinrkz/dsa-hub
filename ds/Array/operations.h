#include <iostream>
#include <string>

using namespace std;


/** Returns Length of Array **/
int lengthOf(int *arr) {
    return ((sizeof(arr) / sizeof(*arr)));
}


/** Prints Array Elements **/
void print(string title, int *arr, int len) {
    cout << title << ": [";
    for (int i = 0; i < len; i++)  {
        cout << " " << i[arr] <<  " ";
    }   
    cout << "]" << endl;
}




/** Insert element at beginning **/
void insertAtBeginning(int* arr, int size, int n, int value) {
    for (int i = n; i >=0; i--) {
        arr[i + 1] = arr[i];
    }
    arr[0] = value;
    n++;

    print("Array after insertion at beginning", arr, size);
}



void insertAtIndex(int* arr, int size, int n, int index, int value ) {
    for (int i = 0; i < size; i++) {
        if (i == index) {
            arr[i] = value;
        }
    }

    print("Array after inserting at an index", arr, size);
}



void insertBeforeIndex(int* arr, int size, int n, int index, int value ) {
    for (int i = index; i < size; i++) {   
         arr[i + 1] = arr[i];
    }

    arr[index] = value;

    print("Array after inserting before an index", arr, size);
}


