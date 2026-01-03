#include <stdio.h>
#include <string.h>

int match(char *s, char *p) {
  if (*p == '\0')
    return *s == '\0';
  int first = (*s && (*p == *s || *p == '.'));
  if (*(p + 1) == '*')
    return match(s, p + 2) || (first && match(s + 1, p));
  return first && match(s + 1, p + 1);
}

int main() {
  char s[100], p[100];
  scanf("%s %s", s, p);
  printf(match(s, p) ? "true\n" : "false\n");
  return 0;
}
