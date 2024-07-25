public class linear_search{
    public static int LinearSearch(int[] array, int target){
        for(int i=0;i<array.length;i++){
            if(array[i]==target){
                return i;
            }
        }
    return -1;
    }
    public static void main(String[] args){
        int arr[] = {10,5,7,25,30,15};
        int target = 25;

        int result = LinearSearch(arr, target);

        if(result!=-1){
            System.out.println(target + "found at location" + result);
        }else{
            System.out.println(target + "not found in the array");
        }
    }
}