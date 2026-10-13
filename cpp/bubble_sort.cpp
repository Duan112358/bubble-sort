// 冒泡排序示例。
#include <iostream>
#include <vector>

// 原地升序排序。
void bubble_sort(std::vector<int> &items) {
    const std::size_t n = items.size();
    for (std::size_t i = 0; i + 1 < n; ++i) {
        bool swapped = false;
        for (std::size_t j = 0; j + 1 < n - i; ++j) {
            if (items[j] > items[j + 1]) {
                std::swap(items[j], items[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

void print_items(const std::vector<int> &items) {
    std::cout << "[";
    for (std::size_t i = 0; i < items.size(); ++i) {
        std::cout << items[i] << (i + 1 < items.size() ? ", " : "");
    }
    std::cout << "]" << std::endl;
}

int main() {
    std::vector<int> data{5, 2, 9, 1, 5, 6};

    std::cout << "before: ";
    print_items(data);

    bubble_sort(data);

    std::cout << "after:  ";
    print_items(data);
    return 0;
}
