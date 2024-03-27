// Name:
// Block:
// Lab 8: Birthday Baffler

#include <iostream>
using namespace std;

int main() {
  int year, month, day, year2, val1, val2, val3, val4;

  cout << "Enter your birth date (month day year): ";
  cin >> month >> day >> year;

  if ((year > 2099 || 1752 > year) || (month > 12 || 1 > month) ||
      (31 < day || 1 > day))
    return (cout << "This is an invalid date.", 0);

  year2 = year / 100;
  val1 = (3 - (year2 % 4)) * 2;
  val2 = year % 100;
  val3 = val2 / 4;

  bool is_leap_year = false;
  double r1 = year % 4, r2 = year % 100;

  if (!r1 && r2)
    is_leap_year = true;

  switch (month) {
  case 1:
    is_leap_year ? (val4 = 0) : (val4 = 4);
    break;
  case 2:
    is_leap_year ? (val4 = 3) : (val4 = 4);
    break;
  case 5:
    (val4 = 2);
    break;
  case 6:
    (val4 = 5);
    break;
  case 4:
  case 7:
    (val4 = 0);
    break;
  case 8:
    (val4 = 3);
    break;
  case 10:
    (val4 = 1);
    break;
  case 3:
  case 11:
    (val4 = 4);
    break;
  case 9:
  case 12:
    (val4 = 6);
    break;
  }

  int sum = day + val1 + val2 + val3 + val4;
  int remainder = sum % 7;

  string _day;
  switch (remainder) {
  case 0:
    (_day = "Saturday");
    break;
  case 1:
    (_day = "Sunday");
    break;
  case 2:
    (_day = "Monday");
    break;
  case 3:
    (_day = "Tuesday");
    break;
  case 4:
    (_day = "Wednesday");
    break;
  case 5:
    (_day = "Thursday");
    break;
  case 6:
    (_day = "Friday");
    break;
  }

  cout << "You were born on a " << _day << ".";
}