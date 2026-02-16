#include <stdio.h>

int main() {
    int n, key, count=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    scanf("%d", &key);

    for(int i=0; i<n; i++) {
        count++;
        if(arr[i] == key) {
            printf("Found at index %d after %d comparisons\n", i, count);
            return 0;
        }
    }
    printf("Not found after %d comparisons\n", count);
    return 0;
}
