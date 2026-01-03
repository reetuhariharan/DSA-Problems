#include <stdio.h>

int main() {
    int x, rev = 0, t;
    scanf("%d", &x);
    t = x;

    while(t > 0) {
        rev = rev * 10 + t % 10;
        t /= 10;
    }

    if(x == rev)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
