#include <stdio.h>
#include <string.h>

int diff(char *a, char *b) {
  int c = 0;
  for (int i = 0; a[i]; i++)
    if (a[i] != b[i])
      c++;
  return c;
}

int main() {
  int n;
  scanf("%d", &n);

  char words[n][20];
  for (int i = 0; i < n; i++)
    scanf("%s", words[i]);

  char start[20], end[20];
  scanf("%s %s", start, end);

  int steps = 1;
  char curr[20];
  strcpy(curr, start);

  for (int i = 0; i < n; i++) {
    if (diff(curr, words[i]) == 1) {
      steps++;
      strcpy(curr, words[i]);
      if (strcmp(curr, end) == 0)
        break;
    }
  }

  if (strcmp(curr, end) == 0)
    printf("%d\n", steps);
  else
    printf("0\n");

  return 0;
}
