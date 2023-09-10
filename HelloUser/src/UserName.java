import java.util.Scanner;
public class UserName {

    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        System.out.println("Hello User! Please enter your first name: ");
        String userName =scan.nextLine();

        System.out.println("Hi, " + userName + " hope you have a great day!");

    }
}
