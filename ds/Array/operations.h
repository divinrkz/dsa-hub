#include <iostream>
#include <string>

using namespace std;


void print(string title, int *arr, int len) {
    cout << title << ": [";
    for (int i = 0; i < len; i++)  {
        cout << " " << i[arr] <<  " ";
    }   
    cout << "]" << endl;
}





void insert(int *arr, int size, int position, int value){
    size++;
  
    for (int i = size; i >= position; i--)
        arr[i] = arr[i - 1];
  
    arr[position - 1] = value;

    print("Array after insertion: ", arr, size);
}


void remove(int *arr, int size, int x){
    int i;
    for (i = 0; i < size; i++)
        if (arr[i] == x)
            break;
    
    if (i < size) {
        size = size - 1;
        for (int j = i; j < size; j++)
            arr[j] = arr[j + 1];
    }
    print("Array after deletion: ", arr, size);
}
  

