public class insertion_sort {
    public static int[] insertionSort(int[] array) {
        for (int i = 0; i < array.length; i++) {
            int valueToInsert = array[i];
            int holePosition = i;

            while (holePosition > 0 && array[holePosition - 1] > valueToInsert) {
                array[holePosition] = array[holePosition - 1];
                holePosition = holePosition - 1;
            }
            array[holePosition] = valueToInsert;
        }

        return array;
    }

    public static void main(String[] args) {
        int[] arr = {7184, 293, 5929, 5890, 6083, 5896, 1299, 1355, 8771, 8086};

        int[] sortedArray = insertionSort(arr);

        System.out.print("The sorted array: ");
        for (int num : sortedArray) {
            System.out.print(num + " ");
        }
        System.out.println();
    }
}
