#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int h[n];
    for(int i=0;i<n;i++) scanf("%d",&h[i]);

    int maxArea = 0;
    for(int i=0;i<n;i++) {
        int minH = h[i];
        for(int j=i;j<n;j++) {
            if(h[j] < minH) minH = h[j];
            int area = minH * (j - i + 1);
            if(area > maxArea) maxArea = area;
        }
    }
    printf("%d\n", maxArea);
    return 0;
}
