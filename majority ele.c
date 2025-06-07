#include <stdio.h>

int main() {
    int n, i, x, count = 0;
    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
     x = arr[n/2];
    for(i = 0; i < n; i++) {
        if(arr[i] == x)
            count++;
    }

    if(count > n / 2)
        printf("The majority element is : %d\n", x);
    else
        printf("No majority element\n");

    return 0;
}
