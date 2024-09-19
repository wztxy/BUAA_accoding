#include <stdio.h>
// 递归解法
void hanoi(int n, char from, char aux, char to) {
    if (n == 1) {
        printf("%c to %c\n", from, to);
        return;
    }
    hanoi(n - 1, from, to, aux);
    printf("%c to %c\n", from, to);
    hanoi(n - 1, aux, from, to);
}

int main() {
    int n;
    int first_case = 1;

    while (scanf("%d", &n) != EOF) {
        if (!first_case) {
            printf("\n");
        }
        first_case = 0;
        hanoi(n, 'A', 'B', 'C');
    }
    return 0;
}
