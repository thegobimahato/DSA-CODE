#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;

  for (int i = 2; i <= num; i = i + 2) {
    cout << i << " ";
  }

  return 0;
}