#include <iostream>
#include <windows.h>

using namespace std;

template<typename T>
void showArray(T array[], int length) {
  for (int index = 0; index < length; index++)
    cout << array[index] << " ";
}

void generateGoodCase(int array[], int length) {
  for (int index = 0; index < length; index++)
    array[index] = index;
}

void generatePoorCase(int array[], int length) {
  const int size = length - 1;
  for (int index = 0; index <= size; index++)
    array[index] = size - index;
}

void generateRandomCase(int array[], int length) {
  for (int index = 0; index < length; index++)
    array[index] = fmod(rand(), length);
}

void copyValuesToAnotherArray(int arrayToCopy[], int array[], int length) {
  for (int index = 0; index < length; index++) 
    array[index] = arrayToCopy[index];
}
