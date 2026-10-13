# bubble-sort

冒泡排序（Bubble Sort）用 5 种常用语言实现的示例集合。

## 算法说明

冒泡排序反复比较相邻的两个元素，若顺序错误就交换它们，每一轮结束后最大的元素会「浮」到末尾。

- 时间复杂度：最好 O(n)（已优化提前退出时）、平均/最坏 O(n^2)
- 空间复杂度：O(1)
- 稳定性：稳定排序

下面所有实现都做了「本轮无交换则提前结束」的优化。

## 目录结构

| 语言 | 文件 | 运行方式 |
| --- | --- | --- |
| Python | `python/bubble_sort.py` | `python3 python/bubble_sort.py` |
| Java | `java/BubbleSort.java` | `javac java/BubbleSort.java -d out && java -cp out BubbleSort` |
| C | `c/bubble_sort.c` | `gcc -O2 -o c/bubble_sort c/bubble_sort.c && ./c/bubble_sort` |
| C++ | `cpp/bubble_sort.cpp` | `g++ -std=c++17 -O2 -o cpp/bubble_sort cpp/bubble_sort.cpp && ./cpp/bubble_sort` |
| JavaScript | `javascript/bubbleSort.js` | `node javascript/bubbleSort.js` |

每个程序都对同一个示例数组 `[5, 2, 9, 1, 5, 6]` 排序，输出：

```
before: [5, 2, 9, 1, 5, 6]
after:  [1, 2, 5, 5, 6, 9]
```

## 快速验证

```bash
python3 python/bubble_sort.py
node javascript/bubbleSort.js
gcc -O2 -o c/bubble_sort c/bubble_sort.c && ./c/bubble_sort
g++ -std=c++17 -O2 -o cpp/bubble_sort cpp/bubble_sort.cpp && ./cpp/bubble_sort
```
