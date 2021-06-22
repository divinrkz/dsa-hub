#include <iostream>
using namespace std;


void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void sort(int arr[], int n) {
  int i, j, min_idx;

    for (i = 0; i < n-1; i++){
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        swap(&arr[min_idx], &arr[i]);
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
    int arr[] = {64, 25, 12, 22, 11};
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