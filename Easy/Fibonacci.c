#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a = 0, b = 1, c;
    if(n == 0) {
        printf("0\n");
        return 0;
    }

    for(int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    printf("%d\n", b);
    return 0;
}
