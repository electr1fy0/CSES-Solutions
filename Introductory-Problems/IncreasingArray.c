#include <stdio.h>

int main() {
  int size;
  scanf("%d", &size);

  int arr[size];
  for (int i = 0; i < size; ++i) {
    scanf("%d", &arr[i]);
  }

  int count = 0;

  for (int i = 0; i < size - 1; ++i) {
    if (arr[i] > arr[i + 1]) {
      count = count + (arr[i] - arr[i + 1]);
      arr[i + 1] = arr[i];
    }
  }
  printf("%d", count);
  return 0;
}
