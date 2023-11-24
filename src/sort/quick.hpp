#include <iostream>
#include <windows.h>

using namespace std;

void quickSortGoodCases (int array[], int repeats, int length) {
  cout << "Good case Quicksort Pivot(FIRST) => ";
  getTime('Q', array, repeats, length, 'F', 'G');
  cout << endl;

  cout << "Good case Quicksort Pivot(LAST) => ";
  getTime('Q', array, repeats, length, 'L', 'G');
  cout << endl;

  cout << "Good case Quicksort Pivot(MIDDLE) => ";
  getTime('Q', array, repeats, length, 'M', 'G');
  cout << endl;
      
  cout << "Good case Quicksort Pivot(MEDIAN PART) => ";
  getTime('Q', array, repeats, length, 'M', 'G');
  cout << endl;
}


void quickSortBadCases(int array[], int repeats, int length) {
  cout << "Bad case Quicksort Pivot(FIRST) => ";
  getTime('Q', array, repeats, length, 'F', 'B');
  cout << endl;

  cout << "Bad case Quicksort Pivot(LAST) => ";
  getTime('Q', array, repeats, length, 'L', 'B');
  cout << endl;

  cout << "Bad case Quicksort Pivot(MIDDLE) => ";
  getTime('Q', array, repeats, length, 'M', 'B');
  cout << endl;
      
  cout << "Bad case Quicksort Pivot(MEDIAN PART) => ";
  getTime('Q', array, repeats, length, 'M', 'B');
  cout << endl;
}


void quickSortRandomCases(int array[], int repeats, int length) {
  cout << "Random case Quicksort Pivot(FIRST) => ";
  getTime('Q', array, repeats, length, 'F', 'R');
  cout << endl;

  cout << "Random case Quicksort Pivot(LAST) => ";
  getTime('Q', array, repeats, length, 'L', 'R');
  cout << endl;

  cout << "Random case Quicksort Pivot(MIDDLE) => ";
  getTime('Q', array, repeats, length, 'M', 'R');
  cout << endl;
      
  cout << "Random case Quicksort Pivot(MEDIAN PART) => ";
  getTime('Q', array, repeats, length, 'M', 'R');
  cout << endl;
}
