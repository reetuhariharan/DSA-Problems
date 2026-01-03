#include <stdio.h>

int max(int a, int b) { return a > b ? a : b; }

int main() {
  int n;
  scanf("%d", &n);
  int a[n + 2];
  a[0] = 1;
  a[n + 1] = 1;
  for (int i = 1; i <= n; i++)
    scanf("%d", &a[i]);

  int dp[n + 2][n + 2];
  for (int i = 0; i <= n + 1; i++)
    for (int j = 0; j <= n + 1; j++)
      dp[i][j] = 0;

  for (int len = 1; len <= n; len++) {
    for (int l = 1; l <= n - len + 1; l++) {
      int r = l + len - 1;
      for (int k = l; k <= r; k++) {
        dp[l][r] = max(dp[l][r], a[l - 1] * a[k] * a[r + 1] + dp[l][k - 1] +
                                     dp[k + 1][r]);
      }
    }
  }
  printf("%d\n", dp[1][n]);
  return 0;
}
