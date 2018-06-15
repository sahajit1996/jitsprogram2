 #include <stdio.h>
  #define ROW 10
  #define COL 10

  /* inputs matrix entries from the user */
  void inputMatrix(int mat[ROW][COL], int n, char ch) {
        int i, j;
        printf("Enter your entries for matrix %c:\n", ch);
        for (i = 0; i  < n; i++) {
                for (j = 0; j < n; j++) {
                        scanf("%d", &mat[i][j]);
                }
        }
        return;
  }


  /* multiply given two matrices and stores the result in mat1 */
  void multiplyMatrix(int mat1[ROW][COL], int mat2[ROW][COL], int n) {
        int i, j, k, output[ROW][COL] = {0};
        /* matrix multiplication */
        for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                        for (k = 0; k < n; k++) {
                                output[i][j] =
                                        output[i][j] + (mat1[i][k] * mat2[k][j]);
                        }
                }
        }
        for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                        mat1[i][j] = output[i][j];
                }
        }
        return;
  }

  int main() {
        int matA[ROW][COL], matB[ROW][COL], matC[ROW][COL];
        int matD[ROW][COL], i, j, n;

        /* get the order of the matrix */
        printf("Enter the order of the matrices:");
        scanf("%d", &n);

        /* input entries for matrices A to D */
        inputMatrix(matA, n, 'A');
        inputMatrix(matB, n, 'B');
        inputMatrix(matC, n, 'C');
        inputMatrix(matD, n, 'D');

        /* multiply matrix A & B and store the result in matrix A */
        multiplyMatrix(matA, matB, n);
        /* multiplies matrix A & B and stores the result in C */
        multiplyMatrix(matC, matD, n);
        /* multiplies matrix A & B  and stores the result in D */
        multiplyMatrix(matA, matC, n);

        /* chain multiplication output is stored in matrix A */
        printf("Matrix Chain Multiplication Output:\n");
        for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                        /* print the result */
                        printf("%d ", matA[i][j]);
                }
                printf("\n");
        }
        return 0;
  }

