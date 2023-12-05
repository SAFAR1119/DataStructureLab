#include <iostream>
using namespace std;

void insertElement(int arr[], int& size, int element, int position) {
    if (position < 0 || position > size) {
        cout << "Invalid position for insertion." << endl;
        return;
    }

    if (size >= 100) {
        cout << "Array is full. Cannot insert more elements." << endl;
        return;
    }

    for (int i = size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    arr[position] = element;
    size++;
}

void deleteElement(int arr[], int& size, int position) {
    if (position < 0 || position >= size) {
        cout << "Invalid position for deletion." << endl;
        return;
    }

    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;
}

void displayArray(int arr[], int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[100];
    int size = 0;

    insertElement(arr, size, 5, 0); // Insert 5 at position 0
    insertElement(arr, size, 10, 1); // Insert 10 at position 1
    insertElement(arr, size, 15, 1); // Insert 15 at position 1

    displayArray(arr, size); // Display the array

    deleteElement(arr, size, 1); // Delete element at position 1

    displayArray(arr, size); // Display the array after deletion

    return 0;
}
