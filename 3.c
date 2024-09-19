#include <stdio.h>
int main() {
    int n, m, k;
    while (scanf("%d%d%d", &n, &m, &k) != EOF) {
        int sum = 0;
        for (int i = 0; i < k + 1; i++) {
            sum += n + i * m;
        }
        printf("%d\n", sum);
    }
    return 0;
}