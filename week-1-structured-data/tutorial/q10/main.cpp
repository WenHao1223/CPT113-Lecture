// g++ main.cpp -o main && main
// output: output.txt

#include <iostream>
#include <iomanip>
using namespace std;

struct hourlyPaidWorker {
  int hoursWorked;
  double hourlyRate;
};

struct salariedWorker {
  double salary;
  double bonus;
};

union worker {
  hourlyPaidWorker h;
  salariedWorker s;
};

double calculateHourlyPaid (const worker & w) {
  return w.h.hourlyRate * w.h.hoursWorked;
}

double calculateSalaryPaid (const worker & w) {
  return w.s.salary + w.s.bonus;
}

int main () {
  worker w;
  char choice;
  cout << "h - hourly paid worker; s - salaried worker" << endl;
  cout << "h / w ? ";
  cin >> choice;

  if (choice == 'h') {
    cout << "Hourly worked (hour(s)) : ";
    cin >> w.h.hoursWorked;
    cout << "Hourly rate : ";
    cin >> w.h.hourlyRate;
    cout << "Paid RM " << setprecision(2) << fixed << calculateHourlyPaid(w);
  } else {
    cout << "Salary (RM) : ";
    cin >> w.s.salary;
    cout << "Bonus (RM) : ";
    cin >> w.s.bonus;
    cout << "Paid RM " << setprecision(2) << fixed << calculateSalaryPaid(w);
  }

  return 0;
}