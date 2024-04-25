Hi Folks,
this is about matrix calculator. However, it is for studying purpose because it is not perfect calculator. Due to my skill, I cannot make matrix of 3x2 + - * / 2x3
. It is only 2x2 do with 2x2 and also 3x3 do with 3x3.

I will explain as I can to make myself more understandable.
I just seperate it for 3 parts. So, let me start on part1 to part2. REMINDER PART2.1 and PART2.2 are similarly, so I won't explain much about part 2.2......

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
    
First, I declare the i,j,k for forloops, user_input for input the number's position, row and column for the positions, operator for + - x, matrix_a and matrix_b are calculated.

Part1: I use scanf to recieve the input from users. Scanf can be used %d more than one, so I recieve the inputs, and I store them to row and column.

Part2: I use forloop in a loop twice times. first loop is for entering the info. So, everytime the loop is working, I use matrix_a, which is an array, and put i and j to indicate the array's position, so it should be like 00, 01, 10, 11 (if array is 2x2). and lthe second loop shows the output of the array to make sure that the number which user enter is correct. As same as part2.2...

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
Part3: It's kinda complex, so understand by yourself der :DDD. I'm lazy tho. sorry

