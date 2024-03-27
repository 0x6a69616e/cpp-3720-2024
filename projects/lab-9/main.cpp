// Name:
// Block:
// Lab 9: Box Surface Area and Volume

#include <iostream>
using namespace std;

// Function prototype (declaration) here:
double convertToInches(char unit, double measurement);
double promptDimensions(string dimension);


int main() {
  cout << "Welcome to my box calculator!\n";

  double l = promptDimensions("Length"),
    w = promptDimensions("Width"),
    h = promptDimensions("Height");

  cout << "\nThe box's exterior surface area is " << (2*l*w)+(2*l*h)+(2*h*w) << " square inches.\nThe box's volume is " << l*w*h << " cubic inches.";
};


// Function definition (code) here:
double convertToInches(char unit, double measurement) {
  switch (unit) {
    case 'F': measurement*=12; break;
    case 'C': measurement/=2.54; break;
    case 'M': measurement*=39.37; break;
  }

  return measurement;
};

double promptDimensions(string dimension) {
  double measurement;
  char unit;
  cout << "\n" << dimension << "\nEnter the measurement: ";
  cin >> measurement;
  cout << " units I. inches F. feet C. centimeters M. meters: ";
  cin >> unit;

  return convertToInches(unit, measurement);
};
