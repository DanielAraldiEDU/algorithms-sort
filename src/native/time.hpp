#include <iostream>
#include <chrono>

void getTime(char type, int array[], int repeats, int length, char option) {
  double allTime = 0;
  for (int index = 0; index < repeats; index++) {
    const auto startTime = chrono::high_resolution_clock::now();
    
    if (type == 'Q') handleQuickSort(array, 0, length - 1, option);
    else handleShellSort(array, length - 1, option);
    
    const auto endTime = chrono::high_resolution_clock::now();

    chrono::duration<double> time = endTime - startTime;
    cout << "Time: " << time.count() << endl;
    allTime += time.count();
  }

  const double media = allTime/repeats;
  cout << "Media time executed: " << media << endl;
}
