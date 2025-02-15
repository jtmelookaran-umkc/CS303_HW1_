#include <iostream>
#include <fstream>
#include "functions.h"

using namespace std;

// declare Max size of the array 
const int MAX_SIZE = 1000;

int main() {
    double array[MAX_SIZE];
    int size = 0;

    readFile("A1input.txt", array, size);

    cout << "Read " << size << " numbers" << endl;
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    // Function 1: Search for numbers
    SearchInt(array, size, 4);
    SearchInt(array, size, 101);

    // Function 2: Modify value at index
    int oldValue;

    modifyIntValue(array, size, 4, 5, &oldValue);
    cout << array << endl;

    // Function 3: Add a new integer
    addInt(array, &size, MAX_SIZE, 23);
    cout << array << endl;

    // Function 4: Remove an element
    removeElement(array, &size, 4);

    cout << array << endl;
    return 0;
}
