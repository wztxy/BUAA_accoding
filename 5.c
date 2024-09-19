#include <stdio.h>
char num[10000001]; // 题目没给数据范围，所以开大点
int digit_root(const char *num) {
    int sum = 0;
    for (int i = 0; num[i] != '\0'; i++) {
        sum += num[i] - '0';
    }
    while (sum >= 10) {
        int temp_sum = 0;
        while (sum > 0) {
            temp_sum += sum % 10;
            sum /= 10;
        }
        sum = temp_sum;
    }
    return sum;
    /* // 也可以使用数字根公式
    if (sum == 0) {
        return 0;
    } else {
        return 1 + (sum - 1) % 9;
    }
    */
}

int main() {
    scanf("%s", num);
    printf("%d\n", digit_root(num));
    return 0;
}