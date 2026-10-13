/** 冒泡排序示例。 */
public class BubbleSort {

    /** 原地升序排序。 */
    public static void bubbleSort(int[] items) {
        int n = items.length;
        for (int i = 0; i < n - 1; i++) {
            boolean swapped = false;
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

    private static String format(int[] items) {
        StringBuilder sb = new StringBuilder("[");
        for (int i = 0; i < items.length; i++) {
            sb.append(items[i]);
            if (i < items.length - 1) {
                sb.append(", ");
            }
        }
        return sb.append("]").toString();
    }

    public static void main(String[] args) {
        int[] data = {5, 2, 9, 1, 5, 6};
        System.out.println("before: " + format(data));
        bubbleSort(data);
        System.out.println("after:  " + format(data));
    }
}
