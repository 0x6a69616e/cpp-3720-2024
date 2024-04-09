// Name:
// Block:
// Lab 5: Slope

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int x1, x2, y1, y2;

  cout << setiosflags(ios_base::fixed)  	 
   << setiosflags(ios_base::showpoint) 	
   << setprecision(2);
  
  cout << "Enter the coordinates of point 1 (x, y): ";
  cin >> x1 >> y1;
  
  cout << "Enter the coordinates of point 2 (x, y): ";
  cin >> x2 >> y2;

  int rise = y2 - y1, run = x2 - x1;
  double slope = (double)rise/run;
  double yint = y1 - slope * x1;

  if (rise == 0 && run == 0) {
    cout << "Alert! These points do not form a line";
    
  } else if (y1/y2 == 1) {
    cout << "Alert! The line is horizontal." << endl
      << "The equation of the line is y = " << (double)y1;
    
  } else if (x1/x2 == 1) {
    cout << "Alert! The line is vertical." << endl
      << "The equation of the line is x = " << (double)x1;
    
  } else {
    cout << "The slope of the line is " << slope << endl
      << "The slope-intercept form is y = " << slope << "x + " << yint;
  }
  
  return 0;
}