#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);   

    int arr[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);   
        }
    }

    if (m != n) {
        printf("Not a Symmetric Matrix\n");
        return 0;
    }

    int flag = 0;
    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i][j] != arr[j][i]) {
                flag = 1;
                break;
            }
        }
        if (flag) break;
    }

    if (flag)
        printf("Not a Symmetric Matrix\n");
    else
        printf("Symmetric Matrix\n");

    return 0;
}
