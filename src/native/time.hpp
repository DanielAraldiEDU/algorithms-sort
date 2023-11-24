#include <iostream>

void getTime(char type, int array[], int repeats, int length, char option, char typeArray) {
  double allTime = 0;
  int randomArray[length];

  if(typeArray == 'R'){
    copyValuesToAnotherArray(array, randomArray, length);
  }
  
  clock_t start, end;
  for (int index = 0; index < repeats; index++) {
    if(typeArray == 'B') generatePoorCase(array, length);
    else if(typeArray == 'G') generateGoodCase(array, length);
    else array = randomArray;

    cout << "Array: ";
    showArray(array, length);
    cout << endl;
    cout << endl;

    start = clock();

    if (type == 'Q') handleQuickSort(array, 0, length - 1, option);
    else handleShellSort(array, length - 1, option);

    end = clock();

    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);

    cout << "Ordered  Array: ";
    showArray(array, length);
    cout << endl;

    allTime += time_taken;
  }

  cout << "ALL TIME: " << allTime << endl;

  double media = allTime / repeats;
  cout << "Media time executed: " << media << endl;
}
