#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  long long sumcheck = (long long)n * (n + 1) * 0.5;
  long long sum = 0;
  int num;
  while (cin >> num) sum += num;
  cout << sumcheck - sum;
  return 0;
}
