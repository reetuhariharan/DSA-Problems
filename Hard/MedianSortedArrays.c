#include <stdio.h>

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  int a[n], b[m];

  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  for (int i = 0; i < m; i++)
    scanf("%d", &b[i]);

  int c[n + m], i = 0, j = 0, k = 0;
  while (i < n && j < m)
    c[k++] = (a[i] < b[j]) ? a[i++] : b[j++];
  while (i < n)
    c[k++] = a[i++];
  while (j < m)
    c[k++] = b[j++];

  if ((n + m) % 2)
    printf("%.1f\n", (double)c[(n + m) / 2]);
  else
    printf("%.1f\n", (c[(n + m) / 2 - 1] + c[(n + m) / 2]) / 2.0);

  return 0;
}
