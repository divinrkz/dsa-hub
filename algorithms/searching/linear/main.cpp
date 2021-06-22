#include <iostream>
using namespace std;


int search(int arr[], int n, int x) {
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;        
}


int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);

    int position = search(arr, n, x);

    (position == -1)
        ? cout << "Element not found"
        : cout << "Element found at: " << position;
    return 0;
}