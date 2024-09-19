#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        qsort(arr, n, sizeof(int), cmp);
        for (int i = 0; i < n; i++) {
            if (i > 0)
                printf(" ");
            printf("%d", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
