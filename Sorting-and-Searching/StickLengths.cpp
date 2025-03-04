#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main() {
  ios::sync_with_stdio(0), cin.tie(0);

  int n;
  cin >> n;

  ll arr[n], moves = 0;
  for (int i = 0; i < n; ++i) { cin >> arr[i]; }
  sort(arr, arr + n);


  ll median = arr[n / 2];

  for (int i = 0; i < n; ++i) {
      moves += abs(arr[i] - median);
  }
  cout << moves;
}
