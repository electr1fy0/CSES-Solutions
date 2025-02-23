// Feb 20, 2025 at 23:07
#include <iostream>
#include <set>
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
  int n, count = 0;

  cin >> n;
  ll a;
  set<ll> seen;

  for (int i = 0; i < n; ++i) {
    cin >> a;
    if (!seen.count(a))
      count++;
    seen.insert(a);
  }

  cout << count;
  return 0;
}
