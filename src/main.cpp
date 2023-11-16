#include <chrono>
#include <iostream>
#include <math.h>
#include <time.h>

#include "./helpers/array.hpp"
#include "./helpers/validations.hpp"
#include "./native/sort.hpp"
#include "./native/time.hpp"

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
    int arrayGoodCase[length];
    int arrayPoorCase[length];

    switch (cases) {
    case 2: {
      generateGoodCase(arrayGoodCase, length);
      generatePoorCase(arrayPoorCase, length);

      cout << "Good case => ";
      getTime('Q', arrayGoodCase, repeats, length, 'M');

      cout << "Bad case => ";
      getTime('Q', arrayPoorCase, repeats, length, 'M');
      break;
    }
    case 3: {
      int arrayRandomCase[length];
      generateGoodCase(arrayGoodCase, length);
      generatePoorCase(arrayPoorCase, length);
      generateRandomCase(arrayRandomCase, length);

      cout << "Good case => ";
      getTime('Q', arrayGoodCase, repeats, length, 'M');

      cout << "Bad case => ";
      getTime('Q', arrayPoorCase, repeats, length, 'M');

      cout << "Random case => ";
      getTime('Q', arrayRandomCase, repeats, length, 'M');
      break;
    }
    }
  }
}
