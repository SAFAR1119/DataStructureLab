#include <iostream>
using namespace std;

int main() {
    const int maxSize = 100;
    int arr[maxSize];
    int size = 0;

    // Display the initial array
    cout << "Array elements (initially empty): ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Insertion
    int element, position;

    cout << "Enter the element to insert: ";
    cin >> element;

    cout << "Enter the position to insert (0-indexed): ";
    cin >> position;

    if (position < 0 || position > size) {
        cout << "Invalid position for insertion." << endl;
    } else {
        for (int i = size - 1; i >= position; --i) {
            arr[i + 1] = arr[i];
        }
        arr[position] = element;
        size++;

        // Display the array after insertion
        cout << "Array elements after insertion: ";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
