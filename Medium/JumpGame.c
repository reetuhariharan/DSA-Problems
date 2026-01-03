#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    int reach = 0;
    for(int i = 0; i < n; i++) {
        if(i > reach) {
            printf("false\n");
            return 0;
        }
        if(i + a[i] > reach)
            reach = i + a[i];
    }
    printf("true\n");
    return 0;
}
