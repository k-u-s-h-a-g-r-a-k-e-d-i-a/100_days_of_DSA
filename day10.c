#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char a[n];
    for (int i = 0; i < n; i++) {
        scanf(" %c", &a[i]);  
    }

    int flag = 1;  
    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - 1 - i]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
