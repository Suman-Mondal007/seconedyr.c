import java.util.Scanner;

public class MatrixOperations {

    // Method to perform matrix transpose
    public static int[][] transposeMatrix(int[][] matrix, int rows, int cols) {
        int[][] result = new int[cols][rows];
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result[j][i] = matrix[i][j];
            }
        }
        return result;
    }

    // Method to perform matrix multiplication
    public static int[][] multiplyMatrices(int[][] matrix1, int[][] matrix2, int rows1, int cols1, int rows2, int cols2) {
        int[][] result = new int[rows1][cols2];
        for (int i = 0; i < rows1; i++) {
            for (int j = 0; j < cols2; j++) {
                result[i][j] = 0;
                for (int k = 0; k < cols1; k++) {
                    result[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }
        return result;
    }

    // Method to print matrix
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
            System.out.println("Please provide a choice (1 for Matrix Transpose, 2 for Matrix Multiplication).");
            return;
        }
        int choice = Integer.parseInt(args[0]);

        Scanner scanner = new Scanner(System.in);

        if (choice == 1) {  // Matrix Transpose
            System.out.println("Enter the number of rows and columns for the matrix:");
            int rows = scanner.nextInt();
            int cols = scanner.nextInt();

            int[][] matrix = new int[rows][cols];
            System.out.println("Enter the elements of the matrix:");
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    matrix[i][j] = scanner.nextInt();
                }
            }

            int[][] result = transposeMatrix(matrix, rows, cols);
            System.out.println("Matrix Transpose:");
            printMatrix(result, cols, rows);  // Transpose matrix dimensions are swapped

        } else if (choice == 2) {  // Matrix Multiplication
            System.out.println("Enter the dimensions for the first matrix (rows and columns):");
            int rows1 = scanner.nextInt();
            int cols1 = scanner.nextInt();

            System.out.println("Enter the dimensions for the second matrix (rows and columns):");
            int rows2 = scanner.nextInt();
            int cols2 = scanner.nextInt();

            if (cols1 != rows2) {
                System.out.println("Matrix multiplication is not possible. The number of columns of the first matrix must equal the number of rows of the second matrix.");
                return;
            }

            int[][] matrix1 = new int[rows1][cols1];
            int[][] matrix2 = new int[rows2][cols2];

            System.out.println("Enter the elements of the first matrix:");
            for (int i = 0; i < rows1; i++) {
                for (int j = 0; j < cols1; j++) {
                    matrix1[i][j] = scanner.nextInt();
                }
            }

            System.out.println("Enter the elements of the second matrix:");
            for (int i = 0; i < rows2; i++) {
                for (int j = 0; j < cols2; j++) {
                    matrix2[i][j] = scanner.nextInt();
                }
            }

            int[][] result = multiplyMatrices(matrix1, matrix2, rows1, cols1, rows2, cols2);
            System.out.println("Matrix Multiplication Result:");
            printMatrix(result, rows1, cols2);

        } else {
            System.out.println("Invalid choice. Please provide a valid option (1 or 2).");
        }

        scanner.close();
    }
}
