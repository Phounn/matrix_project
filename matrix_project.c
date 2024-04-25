#include <stdio.h>

int size_of_matrix(){
    
}


int main(){
    int i,j,k;
    int user_input;
    int row, column;
    int operator;
    //part1 enter the row and column
    printf("Please enter your row and colmn of matrix_a: ");
    scanf("%d %d", &row, &column);
    int matrix_a[row][column];
    //part2.1 enter the number each position of matrix_a  
    for (i = 0; i < row; i++){
        for (j = 0; j < column; j++){
            scanf("%d", &user_input);
            matrix_a[i][j] = user_input;
        }
    }
    printf("This is matrix A:\n");
    for (i = 0; i < row; i++){
        for (j = 0; j < column; j++){
            printf("[%d]", matrix_a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //part2.2 enter the number each position of matrix_b
    printf("Please enter your row and colmn of matrix_b: ");
    scanf("%d %d", &row, &column);
    int matrix_b[row][column];
    for (i = 0; i < row; i++){
        for (j = 0; j < column; j++){
            scanf("%d", &user_input);
            matrix_b[i][j] = user_input;
        }
    }
    printf("This is matrix b:\n");
    for (i = 0; i < row; i++){
        for (j = 0; j < column; j++){
            printf("[%d]", matrix_b[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //part3 select the operator and play it
    printf("1. Addition\n2. Subtraction\n3. Multiply\n");
    scanf("%d", &operator);
    int sum[row][column];
    int sub[row][column];
    int multi[row][column];
    int multi_store;
    switch (operator)
    {
    case 1: 
        printf("This is matrix' sum\n");
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < column; j++)
            {
                sum[i][j] = matrix_a[i][j] + matrix_b[i][j];
                printf("[%d]", sum[i][j]);
            }
            printf("\n");
        }
        break;
    case 2:
        printf("This is matrix' sub:\n");
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < column; j++)
            {
                sub[i][j] = matrix_a[i][j] - matrix_b[i][j];
                printf("[%d]", sub[i][j]);
            }
            printf("\n");
        }
        break;
    case 3:
        printf("This is matrix's multi:\n");

        for (i = 0; i < row; i++)
        {
            for (j = 0; j < column; j++)
            {
                multi[i][j] = 0;
                for (k = 0; k < row; k++)
                {
                    multi_store = matrix_a[i][k] * matrix_b[k][j];
                    multi[i][j] += multi_store;
                }
                printf("[%d]", multi[i][j]);
            }
            printf("\n");
        }
        break;
    default:
        break;
    }

}