#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    for(int i = 0; i < n; i++) {
        int next = -1;
        for(int j = 1; j <= n; j++) {
            int idx = (i + j) % n;
            if(a[idx] > a[i]) {
                next = a[idx];
                break;
            }
        }
        printf("%d ", next);
    }
    return 0;
}
