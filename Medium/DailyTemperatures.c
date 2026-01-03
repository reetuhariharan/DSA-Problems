#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int t[n], ans[n];

    for(int i = 0; i < n; i++) scanf("%d", &t[i]);

    for(int i = 0; i < n; i++) {
        ans[i] = 0;
        for(int j = i + 1; j < n; j++) {
            if(t[j] > t[i]) {
                ans[i] = j - i;
                break;
            }
        }
    }

    for(int i = 0; i < n; i++)
        printf("%d ", ans[i]);

    return 0;
}
