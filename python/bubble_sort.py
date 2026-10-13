"""冒泡排序示例。"""


def bubble_sort(items):
    """原地升序排序并返回该列表。"""
    n = len(items)
    for i in range(n - 1):
        swapped = False
        for j in range(n - 1 - i):
            if items[j] > items[j + 1]:
                items[j], items[j + 1] = items[j + 1], items[j]
                swapped = True
        if not swapped:
            break
    return items


def main():
    data = [5, 2, 9, 1, 5, 6]
    print(f"before: {data}")
    bubble_sort(data)
    print(f"after:  {data}")


if __name__ == "__main__":
    main()
