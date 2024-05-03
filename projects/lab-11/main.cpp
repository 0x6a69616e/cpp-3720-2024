// Name: Jian Paul Gotico
// Block: G
// Lab 11: Miniature Golf

#include <iomanip>
#include <iostream>
using namespace std;

void iter(int size, int arr[], int &hole_in_one_ct, int &total) {
  for (int i = 0, n; i < size; i++)
    (cout << " hole[" << i + 1 << "]:  ", n = (cin >> arr[i], arr[i]),
     total += n, n - 1 || hole_in_one_ct++);
}

void disp_top(int size) {
  for (int i = 0; i < size; i++)
    cout << i + 1 << setw(3);
}

void disp_btm(int size, int arr[]) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << setw(3);
}

int main() {
  int arr[18], size = sizeof(arr) / sizeof(arr[0]), hole_in_one_ct = 0,
               total = 0;
  string name;

  return (cout << "Enter name of player: ", getline(cin, name),
          cout << "Enter the number of strokes for each hole.\n ",
          iter(size, arr, hole_in_one_ct, total),
          cout << "\n"
               << name << ", here is your scorecard:\n\nHole :   ",
          disp_top(size),
          cout << "\n----------------------------------------------------------"
                  "---\nScore:   ",
          disp_btm(size, arr),
          cout << "\n\nYour total is " << total << ".\nYou scored "
               << hole_in_one_ct << " holes-in-one.",
          0);
};