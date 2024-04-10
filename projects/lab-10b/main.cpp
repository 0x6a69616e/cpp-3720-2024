#include <iostream>
using namespace std;

void get_fraction(int &n, int &d) {
  cout << "Enter the numerator and denominator of the fraction: ";
  for (;;) {
    cin >> n >> d;
    if (d != 0)
      break;
    else
      cout << "Denominator cannot be zero. Enter again: ";
  }
}

int greatestCommonFactor(int x, int y) {
  for (; y != 0;) {
    int temp = y;
    y = x % y;
    x = temp;
  }
  return x;
}

void reduce_fraction(int &nu, int &de) {
  int gcf = greatestCommonFactor(nu, de);
  nu /= gcf;
  de /= gcf;
}

// function prototypes: math operations
void addition(int, int, int, int, int &, int &);
void subtraction(int, int, int, int, int &, int &);
void multiplication(int, int, int, int, int &, int &);
void division(int, int, int, int, int &, int &);

int main() {

  // determines the result format
  // satisfies instruction requirements when false
  bool compact_format = true;

  for (;;) {
    int n1 = 0, n2 = 0, d1 = 0, d2 = 0;
    
    get_fraction(n1, d1);
    get_fraction(n2, d2);

    int choice;
    cout << "\nMenu of Operations\n"
         << "Add...................1\n"
         << "Subtract..............2\n"
         << "Multiply..............3\n"
         << "Divide................4\n\n";

    cout << "Which operation? ";

    int d = 0, n = 0;
    char op = '.';

    for (;;) {
      cin >> choice;
      switch (choice) {
      case 1:
        addition(n1, d1, n2, d2, n, d);
        op = '+';
        break;
      case 2:
        subtraction(n1, d1, n2, d2, n, d);
        op = '-';
        break;
      case 3:
        multiplication(n1, d1, n2, d2, n, d);
        op = '*';
        break;
      case 4:
        division(n1, d1, n2, d2, n, d);
        op = '/';
        break;
      }

      if (op != '.')
        break;
      cout << "Invalid choice! Enter again: ";
    }

    int de = d, nu = n;
    reduce_fraction(nu, de);

    cout << "\n";

    // where 0/n=0
    if (nu == 0)
      compact_format ? (cout << n1 << "/" << d1 << " " << op << " " << n2 << "/"
                             << d2 << " = 0")
                     : (cout << " " << n1 << "     " << n2 << "     " << n,
                        cout << "\n--- " << op << " --- = --- = 0\n",
                        cout << " " << d1 << "     " << d2 << "     " << n);

    // where n/1=n
    else if (de == 1)
      compact_format ? (cout << n1 << "/" << d1 << " " << op << " " << n2 << "/"
                             << d2 << " = " << nu)
                     : (cout << " " << n1 << "     " << n2 << "     " << n,
                        cout << "\n--- " << op << " --- = --- = " << nu << "\n",
                        cout << " " << d1 << "     " << d2 << "     " << d);

    // where the fraction stays the same after attempted reduction
    else if (nu == n && de == d)
      compact_format ? (cout << n1 << "/" << d1 << " " << op << " " << n2 << "/"
                             << d2 << " = " << n << "/" << d)
                     : (cout << " " << n1 << "     " << n2 << "     " << n,
                        cout << "\n--- " << op << " --- = ---\n",
                        cout << " " << d1 << "     " << d2 << "     " << n);

    // where the fraction was able to be reduced
    else
      compact_format
          ? (cout << n1 << "/" << d1 << " " << op << " " << n2 << "/" << d2
                  << " = " << n << "/" << d << " = " << nu << "/" << de)
          : (cout << " " << n1 << "     " << n2 << "     " << n << "     "
                  << nu,
             cout << "\n--- " << op << " --- = --- = ---\n",
             cout << " " << d1 << "     " << d2 << "     " << d << "     "
                  << de);

    char do_continue;
    cout << "\n\nAnother problem (y for yes, n for no)? ";
    cin >> do_continue;
    cout << "\n";

    if (do_continue == 'n' || do_continue == 'N')
      break;
  }

  return (cout << "End!", 0);
}

// math operations
void addition(int n1, int d1, int n2, int d2, int &n, int &d) {
  d = d1 * d2;
  n = (n1 * d2) + (n2 * d1);
}

void subtraction(int n1, int d1, int n2, int d2, int &n, int &d) {
  d = d1 * d2;
  n = (n1 * d2) - (n2 * d1);
}

void multiplication(int n1, int d1, int n2, int d2, int &n, int &d) {
  d = d1 * d2;
  n = n1 * n2;
}

void division(int n1, int d1, int n2, int d2, int &n, int &d) {
  d = d1 * n2;
  n = n1 * d2;
}