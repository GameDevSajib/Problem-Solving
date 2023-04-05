#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int n = 5; // current size of array

    int pos, value;
    cout << "Enter the position where you want to insert the element: ";
    cin >> pos;
    cout << "Enter the value you want to insert: ";
    cin >> value;

    // Shift all elements to the right to make room for the new element
    for (int i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element at the desired position
    arr[pos] = value;

    // Increase the size of the array by 1
    n++;

    // Print the updated array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

