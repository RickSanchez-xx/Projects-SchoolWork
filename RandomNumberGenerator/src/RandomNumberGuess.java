import java.util.Scanner;
import java.util.Random;

public class RandomNumberGuess {

    public static void main(String[] args) {

        // Create a scanner to count players
        Scanner player = new Scanner(System.in);

        // Create a randomizer.
        Random rng = new Random();
        int numbr = rng.nextInt(100) + 1;

        while (true) {
            System.out.println("Guess a Number: ");

            int guess = player.nextInt();
            if (guess == numbr) {
                System.out.println("Good Choice!");
                break;
            } else if (guess < numbr) {
                System.out.println("Guess is to low!!");
            } else {
                System.out.println("Gues is to high!!");
            }
        }
    }
}