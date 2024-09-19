#include <stdio.h>
int main() {
    int x;
    while (scanf("%d", &x) != EOF) {
        int hundred = x / 100;
        int ten = (x / 10) % 10;
        int individual = x % 10;
        // 去除前导零
        if (individual != 0) {
            printf("%d%d%d\n", individual, ten, hundred);
        } else if (ten != 0) {
            printf("%d%d\n", ten, hundred);
        } else {
            printf("%d\n", hundred);
        }
    }
    return 0;
}
