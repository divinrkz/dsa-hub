#include <iostream>
using namespace std;


void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


void sort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) 
        for (j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
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