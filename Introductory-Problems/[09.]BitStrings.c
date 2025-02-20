#include <stdio.h>
#define MOD 1000000007;

int main() {
  // todo: calculate number of bit strings of given length n
  // if n == 3: ans = 8
  // so permutations

  int n;
  long long powered = 1, ans;
  scanf("%d", &n);

  for (int i = 0; i< n; ++i) {
    powered = (powered *2) % MOD;
  }

  printf("%lld", powered);
  return 0;
}
