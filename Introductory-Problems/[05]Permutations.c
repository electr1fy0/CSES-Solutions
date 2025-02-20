#include <stdio.h>

int main() {
  // construct permutation till n such that consecutive difference > 1
  long long n, i;
  scanf("%lld", &n);

  if (n  == 2  || n == 3)
    printf("NO SOLUTION");

  else {
    // i = (n % 2 == 0) ? n : n - 1; // need even i
    i = n - 1;
    while (i > 0) {
      printf("%lld ", i);
      i = i - 2;
    }
    i = n;
    while (i > 0) {
      printf("%lld ", i);
      i = i - 2;
    }
  }

  return 0;
}
