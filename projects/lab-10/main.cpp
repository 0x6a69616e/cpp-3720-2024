// Name:
// Block:
// Lab 10: More Gallons of Paint

#include <iomanip>
#include <iostream>
using namespace std;

double calculate(int, int, int, int, int);
int round_up(double);
void iterate(double &, int &);

int main() {
  cout << setiosflags(ios_base::fixed) << setiosflags(ios_base::showpoint)
       << setprecision(2);

  double gallons = 0.0;
  int gallon_containers = 0;

  while (1) {
    iterate(gallons, gallon_containers);

    char do_loop;
    cout << "\n\nAnother room (y/n)? ";
    cin >> do_loop;
    if (do_loop == 'n')
      break;
    cout << "\n";
  }

  cout << "\nAll the rooms combined will take " << gallons
       << " gallons of paint.\n\n"
       << gallon_containers << " gallon-containers of paint will be required.";
};

double calculate(int l, int w, int h, int windows, int doors) {
  int total_surface_area = 2 * (l + w) * h, window_surface_area = windows * 15,
      door_surface_area = doors * 21;

  return (double)(total_surface_area - window_surface_area - door_surface_area) / 400;
};

// a function of choice
int round_up(double num) { return (int)(num + 0.5); };

void iterate(double &gallons_of_paint, int &gallon_containers_of_paint) {
  int l, w, h, windows, doors;

  cout << "Enter dimensions (length width height): ";
  cin >> l >> w >> h;
  cout << "Enter number of windows and doors: ";
  cin >> windows >> doors;

  double result = calculate(l, w, h, windows, doors);

  cout << "That room will take " << result << " gallons of paint.";

  gallons_of_paint += result;
  gallon_containers_of_paint += round_up(result);
};