#include <iostream>
using namespace std;


void sort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }
}



void print(int arr[], int size) {
    int i = 0;
    cout << "[  ";
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << " ]" << endl;    
}



int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << endl;
    
    cout << "Initial Array: ";
    print(arr, n);

    sort(arr, n);

    cout << "Sorted Array: ";
    print(arr, n);

    cout << endl;


    return 0;
  
}