#include <stdio.h>
#define MOD 1000000007;

int main() {
  int n;
  long long powered = 1, ans;
  scanf("%d", &n);

  for (int i = 0; i< n; ++i) powered = (powered *2) % MOD;

  printf("%lld", powered);
  return 0;
}
