#include <stdio.h>
#define MOD 1000007
// 使用霍纳法则计算多项式的值
int horner(int n, int x, int coeff[]) {
    int result = coeff[n];
    for (int i = n - 1; i >= 0; i--) {
        result = (result * x + coeff[i]) % MOD;
    }
    return result;
}

int main() {
    int n, x;
    while (scanf("%d %d", &n, &x) != EOF) {
        int coeff[n + 1];
        for (int i = 0; i <= n; i++) {
            scanf("%d", &coeff[i]);
        }
        printf("%d\n", horner(n, x, coeff));
    }
    return 0;
}
