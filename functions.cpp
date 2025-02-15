#include <fstream>
#include <iostream>
#include "functions.h" 

using namespace std;

// Function 1: Check if a certain integer exists in array and return index
int SearchInt(double arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;  // Return -1 if number is not found
}

// Function 2: Modify value at index and return old value
void modifyIntValue(double arr[], int size, int index, int newValue, int* oldValue) {
    if (index < 0 || index >= size) {
        *oldValue = 0;//initialize a pointer to store old value
        return;
    }
    *oldValue = arr[index];
    arr[index] = newValue;//display both old and new values 
}

// Function 3: Adds a new integer to the end of an array
int addInt(double arr[], int* currentSize, int maxSize, int newValue) {
    if (*currentSize >= maxSize) {
        return 0;
    }
    arr[*currentSize] = newValue;
    (*currentSize)++;
    return 1;
}

// Function 4: Removes an element at a given index
void removeElement(double arr[], int* size, int index) {
    if (index < 0 || index >= *size) {// checks to see if array is big enough to remove an element
        return;
    }
    while (index < (*size - 1)) {
        arr[index] = arr[index + 1];//shifts everything over 
        index++;
    }
    (*size)--;
}

// Function to read file data into array
void readFile(const char* filename, double arr[], int& size) {
    ifstream inFile(filename);
    if (!inFile) {
        cout << "Error: Opening File" << endl;//error detection when opening file 
        return;
    }
    size = 0;
    while (inFile >> arr[size] && size < 1000) {
        size++;//increment through the entire file
    }
    inFile.close();
}
