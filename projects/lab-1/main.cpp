// Name:
// Block:
// Lab 1: Hello, World!

/***** Include Files *****************/
#include <iostream>
using namespace std;

int main() {
  /****** Variable Declaration *******/
  int i, j;
  cout << "Enter your two favorite numbers: ";
  cin >> i >> j;

  /****** Output *********************/
  cout << "Hello, World!" << endl;
  cout << "Lucky numbers are " << i << " and " << j << ".";

  return 0;
}