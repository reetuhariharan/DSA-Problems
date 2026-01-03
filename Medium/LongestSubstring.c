#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    scanf("%s", s);

    int maxLen = 0;
    for(int i=0;i<strlen(s);i++) {
        int freq[256]={0};
        for(int j=i;j<strlen(s);j++) {
            if(freq[s[j]]) break;
            freq[s[j]]++;
            if(j-i+1 > maxLen)
                maxLen = j-i+1;
        }
    }
    printf("%d\n", maxLen);
    return 0;
}
