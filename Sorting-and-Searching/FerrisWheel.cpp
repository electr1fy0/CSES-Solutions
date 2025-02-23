// Feb 23, 2025 at 13:09
#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;

void solve() {}

int main() {
  ios::sync_with_stdio(0), cin.tie(0);

  ll n, x, a;
  cin >> n >> x;

  int count = 0;

  vector<int> arr(n);
  for (int i = 0; i < n; ++i)
    cin >> arr[i];
  sort(arr.rbegin(), arr.rend());

  int aptr = 0, bptr = n - 1;
  while (aptr <= bptr) {
    if (arr[aptr] + arr[bptr] <= x)
      bptr--;
    aptr++;
    count++;

  }

  cout << count;
  return 0;
}
