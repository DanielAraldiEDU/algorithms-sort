#include <iostream>
#include <windows.h>

using namespace std;

void shellSortGoodCases(int array[], int repeats, int length){
  cout << "Good case Shellsort Group(4) => ";
  getTime('S', array, repeats, length, '4', 'G');
  cout << endl;

  cout << "Good case Shellsort Group(6) => ";
  getTime('S', array, repeats, length, '6', 'G');
  cout << endl;

  cout << "Good case Shellsort Group(8) => ";
  getTime('S', array, repeats, length, '8', 'G');
  cout << endl;
}


void shellSortBadCases(int array[], int repeats, int length) {
  cout << "Bad case ShellSort Group(4) => ";
  getTime('S', array, repeats, length, '4', 'B');
  cout << endl;

  cout << "Bad case ShellSort Group(6) => ";
  getTime('S', array, repeats, length, '6', 'B');
  cout << endl;

  cout << "Bad case ShellSort Group(8) => ";
  getTime('S', array, repeats, length, '8', 'B');
  cout << endl;
      
}


void shellSortRandomCases(int array[], int repeats, int length) {
  cout << "Random case ShellSort Group(4) => ";
  getTime('S', array, repeats, length, '4', 'R');
  cout << endl;

  cout << "Random case ShellSort Group(6) => ";
  getTime('S', array, repeats, length, '6', 'R');
  cout << endl;

  cout << "Random case ShellSort Group(8) => ";
  getTime('S', array, repeats, length, '8', 'R');
  cout << endl;

}
