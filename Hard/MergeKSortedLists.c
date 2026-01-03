#include <stdio.h>

int main() {
  int k, n;
  scanf("%d %d", &k, &n);
  int a[k][n];

  for (int i = 0; i < k; i++)
    for (int j = 0; j < n; j++)
      scanf("%d", &a[i][j]);

  int idx[k];
  for (int i = 0; i < k; i++)
    idx[i] = 0;

  for (int cnt = 0; cnt < k * n; cnt++) {
    int min = 100000, pos = -1;
    for (int i = 0; i < k; i++) {
      if (idx[i] < n && a[i][idx[i]] < min) {
        min = a[i][idx[i]];
        pos = i;
      }
    }
    printf("%d ", min);
    idx[pos]++;
  }
  return 0;
}
