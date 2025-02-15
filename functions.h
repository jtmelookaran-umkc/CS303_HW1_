#pragma once
#include <iomanip>
using namespace std;

// Function declarations 
int SearchInt(double arr[], int size, int value);
void modifyIntValue(double arr[], int size, int index, int newValue, int* oldValue);
int addInt(double arr[], int* currentSize, int maxSize, int newValue);
void removeElement(double arr[], int* size, int index);
void readFile(const char* filename, double arr[], int& size);
