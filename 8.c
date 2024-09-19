#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int a, b, c, d, e, f, g, h;
        scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);
        // 分成两部分计算
        int part1 = (a * c) / b;
        int part2 = (d * g * h) / (e * f);
        int result = part1 + part2;
        printf("%d\n", result);
    }
    return 0;
}
