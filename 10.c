#include <stdio.h>
#define MOD 100007
// 动态规划
long long solve(long long n) {
    if (n == 1)
        return 2;
    if (n == 2)
        return 3;

    long long prev2 = 2;
    long long prev1 = 3;
    long long current;

    for (long long i = 3; i <= n; i++) {
        current = (prev1 + prev2) % MOD;
        prev2 = prev1;
        prev1 = current;
    }

    return current;
}

int main() {
    long long n;
    while (scanf("%lld", &n) != EOF) {
        printf("%lld\n", solve(n));
    }
    return 0;
}

/* // 快速幂矩阵法
typedef struct {
    long long mat[2][2];
} Matrix;

Matrix mat_mult(Matrix A, Matrix B) {
    Matrix result;
    result.mat[0][0] = (A.mat[0][0] * B.mat[0][0] + A.mat[0][1] * B.mat[1][0]) % MOD;
    result.mat[0][1] = (A.mat[0][0] * B.mat[0][1] + A.mat[0][1] * B.mat[1][1]) % MOD;
    result.mat[1][0] = (A.mat[1][0] * B.mat[0][0] + A.mat[1][1] * B.mat[1][0]) % MOD;
    result.mat[1][1] = (A.mat[1][0] * B.mat[0][1] + A.mat[1][1] * B.mat[1][1]) % MOD;
    return result;
}

Matrix mat_pow(Matrix base, long long exp) {
    Matrix result = {{{1, 0}, {0, 1}}};
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = mat_mult(result, base);
        }
        base = mat_mult(base, base);
        exp /= 2;
    }
    return result;
}

long long solve(long long n) {
    if (n == 1) return 2;
    if (n == 2) return 3;
    Matrix M = {{{1, 1}, {1, 0}}};
    Matrix result = mat_pow(M, n - 2);
    return (result.mat[0][0] * 3 + result.mat[0][1] * 2) % MOD;
}
*/