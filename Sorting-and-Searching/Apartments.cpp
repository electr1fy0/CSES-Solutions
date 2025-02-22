// Feb 20, 2025 at 23:16
#include <algorithm>
#include <iostream>

typedef long long ll;
using namespace std;

int main() {
  ios::sync_with_stdio(0), cin.tie(0);

  int n, m, k;
  cin >> n >> m >> k;

  int a[n], b[m];
  for (int i = 0; i < n; ++i) cin >> a[i];
  for (int i = 0; i < m; ++i) cin >> b[i];

  sort(a, a + n);
  sort(b, b + m);

  int cnt = 0;
  int p = 0, q = 0;

  while ( p < n) {
      while ( q < m && b[q] < a[p] - k) q++;
      if ( q < m && a[p] - k <= b[q] && b[q] <= a[p] + k) {
          cnt++, p++, q++;
      } else p++;
  }


  cout << cnt << '\n';
  return 0;
}
