#include <stdio.h>

int min(int a, int b) { return a < b ? a : b; }
int max(int a, int b) { return a > b ? a : b; }

int main() {
  int n;
  scanf("%d", &n);
  int h[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &h[i]);

  int l = 0, r = n - 1, lm = 0, rm = 0, water = 0;
  while (l < r) {
    if (h[l] < h[r]) {
      lm = max(lm, h[l]);
      water += lm - h[l];
      l++;
    } else {
      rm = max(rm, h[r]);
      water += rm - h[r];
      r--;
    }
  }
  printf("%d\n", water);
  return 0;
}
