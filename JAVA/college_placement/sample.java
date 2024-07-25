import java.util.Scanner;
public class sample {
    public static void main(String[] args){
        System.out.println("Hello");
        Scanner sc = new Scanner(System.in);
        System.out.println("enter your age: ");
        int age = sc.nextInt();
        if(age>17){
            System.out.println("Eligible");
        }else{
            System.out.println("Not Eligible");
        }
    }
}