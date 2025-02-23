#include <stdio.h>

int main() {
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
