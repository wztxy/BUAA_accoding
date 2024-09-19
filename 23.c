#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (b <= c && b < a) {
            printf("fail\n");
        } else {
            int time = 0;
            int height = 0;
            while (height < a) {
                time++;
                height += b;
                if (height >= a) {
                    break;
                }
                height -= c;
            }
            printf("%d\n", time);
        }
    }
    return 0;
}
