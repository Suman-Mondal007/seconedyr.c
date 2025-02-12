import java.util.Scanner;
public class MatrixAddition {
    public static int[][] addMatrices(int[][] matrix1, int[][] matrix2, int rows, int cols) {
        int[][] result = new int[rows][cols];
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }
        return result;
    }
    public static void printMatrix(int[][] matrix, int rows, int cols) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        if (args.length == 0) {
            System.out.println("Please provide a choice (1 for Matrix Addition).");
            return;
        }
        int choice = Integer.parseInt(args[0]);
        if (choice == 1) {  
            Scanner scanner = new Scanner(System.in);
            System.out.println("Enter the number of rows and columns for the matrices:");
            int rows = scanner.nextInt();
            int cols = scanner.nextInt();
            int[][] matrix1 = new int[rows][cols];
            int[][] matrix2 = new int[rows][cols];
            System.out.println("Enter elements of the first matrix:");
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    matrix1[i][j] = scanner.nextInt();
                }
            }
            System.out.println("Enter elements of the second matrix:");
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    matrix2[i][j] = scanner.nextInt();
                }
            }
            int[][] result = addMatrices(matrix1, matrix2, rows, cols);
            System.out.println("Result of Matrix Addition:");
            printMatrix(result, rows, cols);
            scanner.close();
        } else {
            System.out.println("Invalid choice. Please provide a valid option.");
        }
    }
}
