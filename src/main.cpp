#include <iostream>
#include <math.h>
#include <time.h>

#include "./helpers/array.hpp"
#include "./helpers/validations.hpp"
#include "./native/sort.hpp"
#include "./native/time.hpp"
#include "./sort/quick.hpp"
#include "./sort/shell.hpp"

using namespace std;

int main() {
  srand(time(NULL));

  int length, cases, repeats;

  cout << "Insert array size: ";
  cin >> length;

  cout << "Enter the number of cases (min: 2 | max: 3): ";
  cin >> cases;

  cout << "Number of times to repeat: ";
  cin >> repeats;

  cout << endl;

  if (numberOfCases(cases)) {
    int array[length];

    // quickSortGoodCases(array, repeats, length);
    // quickSortBadCases(array, repeats, length);

    // shellSortGoodCases(array, repeats, length);
    // shellSortBadCases(array, repeats, length);

    if(cases == 3){
      generateRandomCase(array,length);
      quickSortRandomCases(array, repeats, length);
      shellSortRandomCases(array, repeats, length);
    }
  } else {
    cout << "Invalid number cases!" << endl;
  }

  return 0;
}
