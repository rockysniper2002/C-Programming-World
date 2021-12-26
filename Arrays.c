#include <stdio.h>

#define ROWS 3
#define COLS 3

/* Function declaration to input and print two dimensional array */
void inputMatrix(int matrix[][COLS], int rows, int cols);
void printMatrix(int matrix[][COLS], int rows, int cols);



int main()
{
    int matrix[ROWS][COLS];
    int i, j;

   printf("Input elements in matrix: \n ");
   
    inputMatrix(matrix, ROWS, COLS);


    /* Print elements in matrix */
    printf("The matrix is\n");
    printMatrix(matrix, ROWS, COLS);


    return 0;
}


void inputMatrix(int matrix[][COLS], int rows, int cols)
{
    int i, j;


    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            // (*(matrix + i) + j is equivalent to &matrix[i][j]
               printf("element - [%d],[%d] : ",i,j);
            scanf("%d", (*(matrix + i) + j));
        }
    }
}


void printMatrix(int (*matrix)[COLS], int rows, int cols)
{
    int i, j;


    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            // ((matrix + i) + j) is equivalent to matrix[i][j]
            printf("%d ", ((matrix + i) + j));
        }

        printf("\n");
    }
}
