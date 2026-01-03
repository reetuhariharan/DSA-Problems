#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int grid[r][c];

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&grid[i][j]);

    int time = 0, changed;

    do {
        changed = 0;
        int temp[r][c];
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                temp[i][j] = grid[i][j];

        for(int i=0;i<r;i++) {
            for(int j=0;j<c;j++) {
                if(grid[i][j] == 2) {
                    if(i>0 && grid[i-1][j]==1) temp[i-1][j]=2, changed=1;
                    if(i<r-1 && grid[i+1][j]==1) temp[i+1][j]=2, changed=1;
                    if(j>0 && grid[i][j-1]==1) temp[i][j-1]=2, changed=1;
                    if(j<c-1 && grid[i][j+1]==1) temp[i][j+1]=2, changed=1;
                }
            }
        }

        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                grid[i][j] = temp[i][j];

        if(changed) time++;
    } while(changed);

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            if(grid[i][j]==1) {
                printf("-1\n");
                return 0;
            }

    printf("%d\n", time);
    return 0;
}
