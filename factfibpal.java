import java.util.Scanner;

public class Main2 {

    // Method to calculate factorial of a number
    public static long factorial(int num) {
        long result = 1;
        for (int i = 1; i <= num; i++) {
            result *= i;
        }
        return result;
    }

    // Method to generate Fibonacci series up to 'n' terms
    public static void fibonacci(int terms) {
        int a = 0, b = 1;
        System.out.print("Fibonacci Series: ");
        for (int i = 0; i < terms; i++) {
            System.out.print(a + " ");
            int next = a + b;
            a = b;
            b = next;
        }
        System.out.println();
    }

    // Method to check if a number is palindrome
    public static boolean isPalindrome(int num) {
        int original = num;
        int reversed = 0;
        while (num != 0) {
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }
        return original == reversed;
    }

    // Method to print the menu
    public static void printMenu() {
        System.out.println("Menu:");
        System.out.println("1. Factorial");
        System.out.println("2. Fibonacci Series");
        System.out.println("3. Palindrome");
        System.out.println("Enter your choice:");
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // If command-line arguments are provided
        if (args.length == 0) {
            // If no arguments are passed, show the menu and allow the user to choose
            printMenu();
            int choice = scanner.nextInt();

            switch (choice) {
                case 1: // Factorial
                    System.out.println("Enter a number to calculate factorial:");
                    int number1 = scanner.nextInt();
                    System.out.println("Factorial of " + number1 + " is " + factorial(number1));
                    break;

                case 2: // Fibonacci Series
                    System.out.println("Enter the number of terms for Fibonacci series:");
                    int terms = scanner.nextInt();
                    fibonacci(terms);
                    break;

                case 3: // Palindrome
                    System.out.println("Enter a number to check if it is palindrome:");
                    int number2 = scanner.nextInt();
                    if (isPalindrome(number2)) {
                        System.out.println(number2 + " is a Palindrome.");
                    } else {
                        System.out.println(number2 + " is not a Palindrome.");
                    }
                    break;

                default:
                    System.out.println("Invalid choice. Please provide a valid option (1, 2, or 3).");
                    break;
            }
        } else {
            // If command-line argument is passed
            int choice = Integer.parseInt(args[0]);

            switch (choice) {
                case 1: // Factorial
                    System.out.println("Enter a number to calculate factorial:");
                    int number1 = scanner.nextInt();
                    System.out.println("Factorial of " + number1 + " is " + factorial(number1));
                    break;

                case 2: // Fibonacci Series
                    System.out.println("Enter the number of terms for Fibonacci series:");
                    int terms = scanner.nextInt();
                    fibonacci(terms);
                    break;

                case 3: // Palindrome
                    System.out.println("Enter a number to check if it is palindrome:");
                    int number2 = scanner.nextInt();
                    if (isPalindrome(number2)) {
                        System.out.println(number2 + " is a Palindrome.");
                    } else {
                        System.out.println(number2 + " is not a Palindrome.");
                    }
                    break;

                default:
                    System.out.println("Invalid choice. Please provide a valid option (1, 2, or 3).");
                    break;
            }
        }

        scanner.close();
    }
}
