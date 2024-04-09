// Name:
// Block:
// Lab 4: Gallons of Paint

#include <iostream>
using namespace std;

int main() {
  int
    length, width, height,
    windows, doors;

  cout << "Enter dimensions (length width height): ";
  cin >> length >> width >> height;

  cout << "Enter number of windows and doors: ";
  cin >> windows >> doors;

  int
    total_surface_area = 2 * (length + width) * height,
    window_surface_area = windows * 15,
    door_surface_area = doors * 21;

  double result = (double)(total_surface_area - window_surface_area - door_surface_area) / 400;
  
  cout << endl << "That room will take " << result << " gallons of paint." << endl;
  cout << (int)(result+1) << " gallon-containers of paint will be required.";

  return 0;
}