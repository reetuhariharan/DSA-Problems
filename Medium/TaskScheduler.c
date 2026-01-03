#include <stdio.h>

int main() {
    int n, cooldown;
    scanf("%d %d", &n, &cooldown);

    char tasks[n];
    for(int i=0;i<n;i++) scanf(" %c",&tasks[i]);

    int freq[26]={0};
    for(int i=0;i<n;i++)
        freq[tasks[i]-'A']++;

    int max=0, count=0;
    for(int i=0;i<26;i++) {
        if(freq[i]>max) {
            max=freq[i];
            count=1;
        } else if(freq[i]==max) {
            count++;
        }
    }

    int result = (max-1)*(cooldown+1)+count;
    if(result < n) result = n;

    printf("%d\n", result);
    return 0;
}
