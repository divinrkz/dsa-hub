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
  

