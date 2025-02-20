#include <iostream>

using namespace std;

int main() {
  // n even -> n / 2
  // n odd -> 3 * n + 1
  // loop until n == 1
  long n;
  cin >> n;

  cout << n << " ";
  while (n != 1) {
    if (n % 2 == 0)
      n /= 2;
    else
      n = 3 * n + 1;
    cout << n << " ";
  }
  return 0;
}
