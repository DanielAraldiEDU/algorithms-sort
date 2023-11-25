#include <iostream>

using namespace std;

int choosePivot(int array[], int left, int right, char option = 'M') {
  switch(option) {
    // Middle
    case 'M': {
      return array[(left + right) / 2];
    }
    // First
    case 'F': {
      return 0;
    }
    // Last
    case 'L': {
      return sizeof(*array) / sizeof(int);
    }
    // Median Part
    case 'P': {
      return array[(left + right) / 3];
    }
    default: {
      return array[(left + right) / 2];
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
  } while (left > right);

  if (left < auxiliarRight) handleQuickSort(array, left, auxiliarRight);
  if (right > auxiliarLeft) handleQuickSort(array, auxiliarLeft, right);
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
