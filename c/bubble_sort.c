/* 冒泡排序示例。 */
#include <stdbool.h>
#include <stdio.h>

/* 原地升序排序，返回排序后的长度不变，仅修改数组内容。 */
static void bubble_sort(int *items, int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - 1 - i; j++) {
            if (items[j] > items[j + 1]) {
                int tmp = items[j];
                items[j] = items[j + 1];
                items[j + 1] = tmp;
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

static void print_items(const int *items, int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d%s", items[i], i < n - 1 ? ", " : "");
    }
    printf("]\n");
}

int main(void) {
    int data[] = {5, 2, 9, 1, 5, 6};
    int n = (int)(sizeof(data) / sizeof(data[0]));

    printf("before: ");
    print_items(data, n);

    bubble_sort(data, n);

    printf("after:  ");
    print_items(data, n);
    return 0;
}
