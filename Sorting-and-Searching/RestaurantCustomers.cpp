// Feb 22, 2025 at 22:02
#include <iostream>
#include <set>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
  ios::sync_with_stdio(0), cin.tie(0);

  ll n, x;
  cin >> n;
  ll a[2 * n];
  ll b[n];
  set<ll> seen;
  for (ll i = 0; i < 2 * n; ++i) {
    cin >> x;
    a[i] = x; // full arr

    if (i % 2 != 0)
      seen.insert(x); // negative only arr
  }

  sort(a, a + 2* n);

  ll max = 0;
  ll current = 0;
  for (ll i = 0; i < 2 * n; ++i) {

      if (seen.count(a[i])) {
          current--;
      } else {
          current++;
      }
      if ( current > max) {
          max = current;
      }
  }

  cout << max;
  return 0;
}
