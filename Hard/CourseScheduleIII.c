#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int duration[n], deadline[n];
  for (int i = 0; i < n; i++)
    scanf("%d %d", &duration[i], &deadline[i]);

  int time = 0, count = 0;
  for (int i = 0; i < n; i++) {
    if (time + duration[i] <= deadline[i]) {
      time += duration[i];
      count++;
    }
  }
  printf("%d\n", count);
  return 0;
}
