#include <stdio.h>

int main() {
    int n, k, count = 0;
    scanf("%d %d", &n, &k);
    int a[n];

    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += a[j];
            if(sum == k) count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
