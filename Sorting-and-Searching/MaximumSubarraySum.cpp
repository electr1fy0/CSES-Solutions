#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
  int n;
  cin >> n;

  ll current = -1e18, maximum = -1e18;

  for (int i = 0; i < n; ++i) {
    ll a;
    cin >> a;
    current = max(a, current + a);
    maximum = max(maximum, current);
  }
  cout << maximum << '\n';
}
