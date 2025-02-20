// Feb 20, 2025 at 20:30
#include <iostream>

using namespace std;

void decimalToBinary(int n, int size) {
  for (int i = size - 1; i >= 0; --i) {
    cout << ((n >> i) & 1);
  }
}

void toGrey(int n) {
  int grey;
  for (int i = 0; i < int(pow(2, n)); ++i) {
    grey = (i) ^ (i >> 1);
    decimalToBinary(grey, n);
    cout << '\n';
  }
}

int main() {
  ios::sync_with_stdio(0), cin.tie(0);
  int n;   // n == nubmber of bits
  cin >> n;
  toGrey(n);
  return 0;
}
