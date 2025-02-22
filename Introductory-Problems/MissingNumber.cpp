#include <iostream>

using namespace std;

int main() {
  // to find: missing number from 1 to n
  // input is not sorted
  // approach 1: sum first n natural numbers and see what's lacking
  int n;
  cin >> n;
  long long sumcheck = (long long)n * (n + 1) * 0.5;
  long long sum = 0;
  int num;
  while (cin >> num) {
    sum+=num;
  }
  cout << sumcheck - sum;
  return 0;
}
