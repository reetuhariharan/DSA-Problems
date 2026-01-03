#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);

    for(int i = 0; i < n; i++) {
        if(i != n - k)
            printf("%d ", a[i]);
    }
    return 0;
}
