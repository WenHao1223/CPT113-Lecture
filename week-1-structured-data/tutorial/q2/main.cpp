// g++ main.cpp -o main && main
// output: output.txt

#include <iostream>
#include <iomanip>
using namespace std;

enum Day {MONDAY, TUEDAY, WEDNESDAY, THURSDAY, FRIDAY};

int main () {
  const int NUM_DAYS = 5;   // The number of days
  double sales[NUM_DAYS];   // To hold sales for each day
  double total = 0.0;       // Accumulator
  Day workDay;              // Loop counter

  const string dayList[NUM_DAYS] = {"MONDAY", "TUEDAY", "WEDNESDAY", "THURSDAY", "FRIDAY"};

  // Get the sales for each day.
  for (workDay = MONDAY; workDay <= FRIDAY; workDay = static_cast<Day>(workDay + 1)) {
    cout << "Enter the sales for day " << dayList[workDay] << ": ";
    cin >> sales[workDay];
  }

  // Calculate the total sales.
  for (workDay = MONDAY; workDay <= FRIDAY; workDay = static_cast<Day>(workDay + 1))
    total += sales[workDay];

  // Display the total.
  cout << "The total sales are $" << setprecision(2) << fixed << total;

  return 0;
}