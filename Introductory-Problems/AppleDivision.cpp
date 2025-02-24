#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main() {
  int n;
  cin >> n;

  int arr[n];

  ll sum = 0, best = 0;
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
    sum += arr[i];
  }

  for (int i = 0; i < 1 << n; ++i) { // 1 << n is basically 2^n
    ll c_sum = 0;                    // current subset sum
    for (int j = 0; j < n; ++j) {
      if (i >> j & 1) c_sum += arr[j];
    }
    if (c_sum <= sum / 2) best = max(best, c_sum);
  }

  cout << sum - 2 * best; // diff = (sum - ans) - ans
}
