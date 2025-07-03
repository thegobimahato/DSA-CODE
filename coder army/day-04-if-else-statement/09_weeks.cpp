#include <iostream>
using namespace std;

int main() {
  int number;
  cout << "Enter a number between (1-7) : ";
  cin >> number;

  if (number == 1)
    cout << "Monday";
  else if (number == 2)
    cout << "Thuesday";
  else if (number == 3)
    cout << "Wedesday";
  else if (number == 4)
    cout << "Thursday";
  else if (number == 5)
    cout << "Friday";
  else if (number == 6)
    cout << "Saturday";
  else if (number == 7)
    cout << "Sunday";
  else
    cout << "Enter Valid Date!";

  return 0;
}