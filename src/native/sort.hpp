#include <iostream>

using namespace std;

void swap(int &firstValue, int &secondValue) {
  int auxiliar = firstValue;
  firstValue = secondValue;
  secondValue = auxiliar;
}

int chooseMedianPart(int array[], int left, int right, int middle) {
  if (array[left] > array[middle]) swap(array[left], array[middle]);
  if (array[middle] > array[right]) {
    swap(array[middle], array[right]);
    if (array[left] > array[middle]) swap(array[left], array[middle]);
  }
  return middle;
}

int choosePivot(int array[], int left, int right, char option = 'M') {
  const int sidesSum = left + right;
  const int middle = sidesSum / 2;
  switch(option) {
    // Middle
    case 'M': {
      return array[middle];
    }
    // First
    case 'F': {
      return array[left];
    }
    // Last
    case 'L': {
      return array[right];
    }
    // Median Part
    case 'P': {
      return array[chooseMedianPart(array, left, right, middle)];
    }
    default: {
      return array[middle];
    }
  }
}

void handleQuickSort(int array[], int left, int right, char option = 'M') {
  int auxiliar, auxiliarLeft, auxiliarRight, pivot;

  auxiliarLeft = left;
  auxiliarRight = right;
  pivot = choosePivot(array, left, right, option);

  do {
    while (pivot > array[auxiliarLeft]) auxiliarLeft++;
    while (pivot < array[auxiliarRight]) auxiliarRight--;

    if (auxiliarLeft <= auxiliarRight) {
      auxiliar = array[auxiliarLeft];
      array[auxiliarLeft] = array[auxiliarRight];
      array[auxiliarRight] = auxiliar;

      auxiliarLeft++;
      auxiliarRight--;
    }
  } while (auxiliarLeft <= auxiliarRight);

  if (left < auxiliarRight) handleQuickSort(array, left, auxiliarRight, option);
  if (right > auxiliarLeft) handleQuickSort(array, auxiliarLeft, right, option);
}

int chooseGroup(char option = '4') {
  switch(option) {
    case '4': {
      return 4;
    }
    case '6': {
      return 6;
    }
    case '8': {
      return 8;
    }
    default: {
      return 4;
    }
  }
}

void handleSort(int array[], int increment, int index, int length) {
  int i, j, k, temp;
  bool isFound;

  for (i = (index + increment); i < length; i += increment) {
    j = index;
    isFound = false;

    while (j < i && !isFound) {
      if (array[i] < array[j]) isFound = true;
      else j = j + increment;
    }

    if (isFound) {
      temp = array[i];
      k = i - increment;
      while(k > (j - increment)) {
        array[k + increment] = array[k];
        k = k - increment;
      }
      array[j] = temp;
    }
  }
}

void handleShellSort(int array[], int length, char option = '4') {  
  const int group = chooseGroup();
  for (int index = group; index >= 0; index--) {
    int increment = pow(2, index);
    for (int j = 0; j <= increment; j++) handleSort(array, increment, j, length);
  }
}
