#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int sum = 0, i = 1;
  while (true) {
    sum += i;
    ++i;
    if (i > 10) {
      break;
    }
  }

  cout << sum << endl;
}