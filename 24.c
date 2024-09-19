#include <stdio.h>
// 弱智题目，描述的输入格式和所给的输入样例不符
int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        int a, b, c, d;
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);
        scanf("%d", &d);
        int h = 0;
        int t = 0;
        int fail = 1;
        for (t = 1; t <= 100000; t++) {
            h += b;
            if (h >= a) {
                printf("%d\n", t);
                fail = 0;
                break;
            }
            int h0 = h;
            h -= c;
            if (h < 0) {
                h = 0;
            }
            int groove = (h0 / d) * d;
            if (h < groove) {
                h = groove;
            }
        }
        if (fail) {
            printf("fail\n");
        }
    }
    return 0;
}
