#include <stdio.h>

int main() {
  // count trailing zeros in factorial
  // 20! has 0000
  // count 5 * 2 pairs
  // 20: 20/2 = 10, 10/2 = 5, 5
  // 20: 20-5 = 15, 20 - 5 = 10
  // 20 has 10 twos and 4 fives, so basically 4 trailing zeros
  // wait: so basically if the number is large like 100 it has multiple 5s of itself

  long long n;
  scanf("%lld", &n);


  long long count2 = 0;
  int factor2 = 5;
  while (factor2 <= n) {
      count2 = count2 + n / factor2;
      factor2*=2;
  }

  long long count5 = 0;
  int factor5 = 5;
  while (factor5 <= n) {
      count5 = count5 + n / factor5;
      factor5*=5;
  }

  printf("%lld", ((count5<count2)? count5:count2));
  return 0;
}
