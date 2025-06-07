#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n], res[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(i == 0)
            res[i] = arr[i] * arr[i+1];
        else if(i == n-1)
            res[i] = arr[i] * arr[i-1];
        else
            res[i] = arr[i-1] * arr[i+1];
    }

    for(i = 0; i < n; i++) {
        printf("%d ", res[i]);
    }

    return 0;
}
