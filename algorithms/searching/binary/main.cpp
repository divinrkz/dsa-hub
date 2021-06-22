#include <iostream.h>
using namespace std;


int search(int arr[], int l, int r, int x) {
    while (l <= r) {
        int m = l + (r - l) / 2;

        if (arr[m] == x)
            return m;

        if (arr[m] < x)
            l = m + 1;

        else 
            r = m - 1;        
    }

    return -1;
}



int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int position = search(arr, 0, (n - 1), x);


    (position == -1)
        ? cout << "Element not found" << endl
        : cout << "Element found at: " << position << endl;
}