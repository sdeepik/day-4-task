#include <stdio.h>

int main() {
    int n, i, j, sum;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++) scanf("%d", &a[i]);

    for(i = 0; i < n; i++) {
        sum = 0;
        for(j = i+1; j < n; j++) sum += a[j];
        printf("%d ", sum);
    }
    return 0;
}
