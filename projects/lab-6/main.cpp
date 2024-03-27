// Name:
// Block:
// Lab 6: Five-Babbage Burgers and Fries

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double hourly_rate = 7.72,
    tax = 0.33,
    total = 0;
  int weeks;
  
  cout << setiosflags(ios_base::fixed)  	 
    << setiosflags(ios_base::showpoint) 	
    << setprecision(2);

  cout << "How many weeks in this pay period? ";
  cin >> weeks;
  cout << "\n";

  for (int n = 0; n < weeks; n++) {
    int hours_worked;
    
    cout << "How many hours did you work this week? ";
    cin >> hours_worked;
    
    double paycheck = hourly_rate * hours_worked,
      take_home = paycheck - paycheck*tax;
    
    cout << "Your take-home pay is $" << take_home << "\n\n";
    
    total += take_home;
  }

  cout << "Your total pay for the pay period is $" << total << "\nHope you enjoy working at Babbage Burgers.";
}