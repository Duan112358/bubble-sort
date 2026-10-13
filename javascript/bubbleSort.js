// 冒泡排序示例。

/**
 * 原地升序排序并返回该数组。
 * @param {number[]} items
 * @returns {number[]}
 */
function bubbleSort(items) {
  const n = items.length;
  for (let i = 0; i < n - 1; i++) {
    let swapped = false;
    for (let j = 0; j < n - 1 - i; j++) {
      if (items[j] > items[j + 1]) {
        [items[j], items[j + 1]] = [items[j + 1], items[j]];
        swapped = true;
      }
    }
    if (!swapped) {
      break;
    }
  }
  return items;
}

function main() {
  const data = [5, 2, 9, 1, 5, 6];
  console.log(`before: [${data.join(", ")}]`);
  bubbleSort(data);
  console.log(`after:  [${data.join(", ")}]`);
}

if (require.main === module) {
  main();
}

module.exports = { bubbleSort };
