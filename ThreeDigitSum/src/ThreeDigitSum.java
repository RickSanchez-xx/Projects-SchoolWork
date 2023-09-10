import java.util.Scanner;

public class ThreeDigitSum {

    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int x, y, z;
        int sum = 0;

        System.out.println("Please enter your first Number: ");
        x = input.nextInt();
        System.out.println("Please enter your second number: ");
        y = input.nextInt();
        System.out.println("Please enter your third number: ");
        z = input.nextInt();

        sum = (x + y + z);

        System.out.println("Result: " + sum);

    }
}