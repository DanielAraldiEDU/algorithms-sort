#include <iostream>

void getTime(char type, int array[], int repeats, int length, char option, char typeArray) {
  clock_t start, end;
  double allTime = 0;
  int auxiliarRandomArray[length];

  if (typeArray == 'R') copyValuesToAnotherArray(array, auxiliarRandomArray, length);

  for (int index = 0; index < repeats; index++) {
    if (typeArray == 'B') generatePoorCase(array, length);
    else if (typeArray == 'G') generateGoodCase(array, length);
    else array = auxiliarRandomArray;

    start = clock();
    if (type == 'Q') handleQuickSort(array, 0, length - 1, option);
    else handleShellSort(array, length, option);
    end = clock();

    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);

    cout << "Ordered Array: ";
    showArray(array, length);
    cout << endl;

    allTime += time_taken;
  }

  cout << "All time: " << allTime << endl;

  double media = allTime / repeats;
  cout << "Media time executed: " << media << endl;
}
