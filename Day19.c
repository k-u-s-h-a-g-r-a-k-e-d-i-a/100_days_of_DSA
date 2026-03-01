#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int minSum = __INT_MAX__;
    int pair1 = 0, pair2 = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = arr[i] + arr[j];
            if (abs(sum) < abs(minSum)) {
                minSum = sum;
                pair1 = arr[i];
                pair2 = arr[j];
            }
        }
    }

    printf("Pair closest to zero: %d, %d (sum = %d)\n", pair1, pair2, minSum);
    return 0;
}
