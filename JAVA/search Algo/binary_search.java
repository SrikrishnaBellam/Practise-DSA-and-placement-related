public class binary_search{
    public static int binarySearch(int[] array, int target){
        int left = 0;
        int right = array.length - 1;

        while(left <= right){
            int mid = left +(right-left)/2;
            if(array[mid] == target){
                return mid;
            }
            if(array[mid]<target){
                left = mid +1;
            }else{
                right = mid -1;
            }
        }
        return -1;
    }

    public static void main(String[] args){
        int[] arr = {5, 7, 10, 15, 25, 30};
        int target = 25;

        int result = binarySearch(arr, target);

        if(result != -1){
            System.out.println(target+" found at location "+ result);
        } else {
            System.out.println(target+ " not found in the array ");
        }

    }
}