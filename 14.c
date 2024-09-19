#include <stdio.h>
#define MAXN 10000001

int arr[MAXN], temp[MAXN];

// 归并排序并统计逆序数
long long merge_sort(int left, int right) {
    if (left >= right)
        return 0;
    int mid = (left + right) / 2;
    long long count = merge_sort(left, mid) + merge_sort(mid + 1, right);
    int i = left, j = mid + 1, k = left;
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            count += (mid - i + 1);
        }
    }
    while (i <= mid)
        temp[k++] = arr[i++];
    while (j <= right)
        temp[k++] = arr[j++];
    for (i = left; i <= right; i++)
        arr[i] = temp[i];
    return count;
}

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        printf("%lld\n", merge_sort(0, n - 1));
    }
    return 0;
}
