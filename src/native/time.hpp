#include <iostream>

void getTime(char type, int array[], int repeats, int length, char option) {
  double allTime = 0;
  for (int index = 0; index < repeats; index++) {
    int start = time(NULL);

    if (type == 'Q') handleQuickSort(array, 0, length - 1, option);
    else handleShellSort(array, length - 1, option);
    
    int end = time(NULL);
    allTime += double(end - start);
  }

  const double media = allTime / repeats;
  cout << "Media time executed: " << media << endl;
}
