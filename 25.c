#include <math.h>
#include <stdio.h>
int is_prime(long long x) {
    if (x == 1) {
        return 0;
    }
    if (x == 2) {
        return 1;
    }
    if (x % 2 == 0) {
        return 0;
    }

    // 试除法：如果一个数x是合数，则它必然有一个因数小于等于sqrt(x)，所以只需要检查x是否能被小于等于sqrt(x)的数整除。时间复杂度为 O(√x)，空间复杂度为 O(1)。
    long long limit = sqrt(x);
    for (long long i = 3; i <= limit; i += 2) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        long long x;
        scanf("%lld", &x);
        if (is_prime(x)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    return 0;
}
