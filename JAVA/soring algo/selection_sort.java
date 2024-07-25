public class selection_sort {
    public static int selectionSort(int[] array){
        int n = array.length;
        for (int i=0; i<n-1;i++){
            int min = i;
            for(int j=i;j<n;j++){
                if (array[j]<array[i]){
                    min = j;
                }
            }
            if (min != i){
                int temp = array[min];
                array[min] = array[i];
                array[i] = temp;
            }
        }
        return array;
    }
    public static void main(String[] args) {
        int[] arr = {7184, 293, 5929, 5890, 6083, 5896, 1299, 1355, 8771, 8086};

        int[] sortedArray = selectionSort(arr);

        System.out.print("The sorted array: ");
        for (int num : sortedArray) {
            System.out.print(num + " ");
        }
        System.out.println();
    }
}