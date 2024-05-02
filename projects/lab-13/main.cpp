// Name:
// Block:
// Lab 13: Basketball

#include <iomanip>
#include <iostream>
using namespace std;

int get_col(int i) { return (i / 2); }
int get_qtr(int col) { return (col > 2 ? col - 1 : col) + 1; }
int get_row(int i) { return i % 2 == 0 ? 0 : 1; }

string get_ord(int num) {
  string ord;
  switch (num % 10) {
  case 1:
    ord = "st";
    break;
  case 2:
    ord = "nd";
    break;
  case 3:
    ord = "rd";
    break;
  default:
    ord = "th";
    break;
  }
  return to_string(num) + ord;
}

int main() {
  int qtr_track[3] = {}, arr[2][6], visiting_total = 0, home_total = 0, num;
  string space = string(15, ' '), hr = space + string(55, '-'),
         team[2] = {"Home", "Visiting"};

  for (int i = 0; i < 12; i++) {
    int col = get_col(i), row = get_row(i);
    !((col + 1) % 3) ? (arr[row][col] = row ? home_total : visiting_total) : ({
      int score, qtr = get_qtr(col);
      (cout << "Enter the " << team[row] << " team's " << get_ord(qtr) << " quarter score: ",
       cin >> score, arr[row][col] = score,
       row ? (home_total += score, qtr_track[2] += score,
              !(qtr_track[2] > qtr_track[1]) ||
                  (qtr_track[0] = qtr, qtr_track[1] = qtr_track[2]))
           : (visiting_total += score, qtr_track[2] = score));
    });
  }

  cout << "\n\n"
       << space << "   1st      2nd    Halftime   3rd      4th     Final"
       << "\n"
       << hr << "\nVisiting team: |";
  for (int i : arr[0]) cout << setw(5) << i << setw(4) << "|";
  cout << "\n" << hr << "\nHome team:     |";
  for (int i : arr[1]) cout << setw(5) << i << setw(4) << "|";
  return (cout << "\n"
               << hr << "\n\nThe "
               << (home_total > visiting_total ? team[0] : team[1])
               << " team won!\nQuarter " << qtr_track[0]
               << " had the most total points scored. There were "
               << qtr_track[1] << " points scored.",
          0);
}