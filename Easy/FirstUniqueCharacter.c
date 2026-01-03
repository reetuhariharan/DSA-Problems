#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int freq[26] = {0};

    scanf("%s", s);

    for(int i = 0; s[i]; i++)
        freq[s[i] - 'a']++;

    for(int i = 0; s[i]; i++) {
        if(freq[s[i] - 'a'] == 1) {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
