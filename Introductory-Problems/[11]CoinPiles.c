#include <stdio.h>
#include </Users/ayush/Developer/headers/io_redirect.c>

int main() {
  // todo: find efficiently if both piles can be emptied
  // a and b coin count respectively in piles
  // restrictions per move: remove 1|2 or 2|1 coins from piles
  // approach: multiple of 3, difference
  // 2 1
  // 4 2
  // case1: left or right is double
  // case 2: both equal
  // case else: both different but difference probably multiple of 2 moves
  // conditions: difference should be smaller than the number

  int n;
  scanf("%d", &n);

  int a, b;
  int larger, smaller;

  for (int i = 0; i < n; i++) {
    scanf("%d %d", &a, &b);

    if (a > b) {
      larger = a;
      smaller = b;
    } else {
      larger = b;
      smaller = a;
    }

    if (((a + b) % 3 == 0) && (larger - smaller) <= smaller)
      printf("YES\n");
    else
      printf("NO\n");
  }

  return 0;
}
