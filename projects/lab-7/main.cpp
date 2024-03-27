// Name:
// Block:
// Lab 7: Five-Babbage Burgers and Fries, Inc.

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  cout << setiosflags(ios_base::fixed) << setiosflags(ios_base::showpoint)
       << setprecision(2);

  char option = 'N';
  cout << "Welcome to Five Babbage Burgers and Fries Payroll Calculator!\n";

  do {
    if (option != 'N')
      cout << "Do you have another employee to pay? (Y or N) ";
    else
      cout << "Do you have an employee to pay? (Y or N) ";
    cin >> option;
    if ('N' == option) {
      cout << endl
           << "Thanks for using our software, hope you have a wonderful day!";
      return 0;
    };

    string first_name, last_name;
    cout << endl << "What is their First Name? ";
    cin >> first_name;
    cout << "What is their Last Name? ";
    cin >> last_name;

    char role;
    double total = 0.0, uncle_sam = 0.28;
    while (total == 0.0) {
      cout << "\nWhat is their role here at Five-Babbage Burgers and Fries "
              "Inc.?\n\nA. Counter Staff\nK. Kitchen Cook\nD. Dishwasher\nM. "
              "Manager\n\nPlease choose an option: ";
      cin >> role;

      switch (role) {
      case 'A':
      case 'D':
        total = 10.50;
        break;
      case 'K':
        total = 15.75;
        break;
      case 'M':
        (total = (double)48000 / 52, uncle_sam = 0.33);
        break;
      };
    }

    if (role != 'M') {
      double hours;
      cout << "\nEnter number of hours worked: ";
      cin >> hours;
      total = hours * total;
    }

    cout << endl
         << "Paycheck Information: " << first_name << " " << last_name
         << " . . . . . $" << (double)total - total * uncle_sam << "\n\n";
  } while (option == 'Y');

  return 0;
}