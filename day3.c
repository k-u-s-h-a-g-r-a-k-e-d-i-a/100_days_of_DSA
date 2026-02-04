#include <stdio.h>

int main() {
    int n, k, comp = 0;
    int arr[100];
    int found = -1;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    
    for (int i = 0; i < n; i++) {
        comp++;
        if (arr[i] == k) {
            found = i;
            break;
        }
    }
