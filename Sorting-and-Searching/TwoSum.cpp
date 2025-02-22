// Feb 21, 2025 at 13:57
#include <algorithm>
#include <iostream>
#include <map>

typedef long long ll;
using namespace std;

int main() {
  ios::sync_with_stdio(0), cin.tie(0);
  int n;
  ll x;
  cin >> n >> x;
  ll arr[n];
  map<ll, int> seen;

  for (int i = 0; i < n; ++i)
    cin >> arr[i];

  for (int i = 0; i < n; ++i) {
    if (seen.count(x - arr[i])) {
      cout << seen[x - arr[i]] << ' ' << i + 1;
      return 0;
    }
    seen[arr[i]] = i + 1;
  }

  cout << "IMPOSSIBLE";

  return 0;
}
