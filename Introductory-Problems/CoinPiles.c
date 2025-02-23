#include <stdio.h>

int absXOR(int a) {
  int mask = a >> 31;
  return (a + mask) ^ mask;
}

int main() {
  int n;
  scanf("%d", &n);

  int a, b;
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &a, &b);

    if ((a + b) % 3 == 0 && absXOR(a - b) <= ((a > b) ? b : a))
      printf("YES\n");
    else
      printf("NO\n");
  }

  return 0;
}
