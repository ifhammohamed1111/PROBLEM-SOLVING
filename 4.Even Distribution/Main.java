import java.util.Scanner;

public class Main {
    public static void main (String[] args  ) {
        // Get the number from the user
        Scanner scanner = new Scanner(System.in);

        // Get the next 3 numbers from the user
        System.out.println("Enter the 1st number: ");
        int number1 = scanner.nextInt();

        System.out.println("Enter the 2st number: ");
        int number2 = scanner.nextInt();

        System.out.println("Enter the 3st number: ");
        int number3 = scanner.nextInt();

        // Check if the numbers are evenly distributed via the function with the return type of boolean
        boolean isEvenlyDistributed = evenDistribution(number1, number2, number3);

        if (isEvenlyDistributed) {
            System.out.println("The numbers are evenly distributed");
        } else {
            System.out.println("The numbers are not evenly distributed");
        }

    }
    static boolean evenDistribution(int number1, int number2, int number3) {
        return number2 - number1 == number3 - number2;
    }
}
