#include <stdio.h>

void star(int rows)
{
    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void reverse_star(int rows)
{
    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int input, j, i, rows, k;

    printf("Enter 0 for star pattern             OR \n Enter 1 for reverse star pattern    OR \n Enter 2 for both star pattern ");
    scanf("%d", &input);
    printf("Enter the number of lines upto which you want * ");
    scanf("%d", &rows);
    switch (input)
    {

    case 0:
        star(rows);
        break;

    case 1:
        reverse_star(rows);
        break;

    case 2:
        star(rows);
        printf(" \n");
        reverse_star(rows);
        break;
    default:
        printf("Enter the valid input \n");
        break;
    
}

// for (int k = 0; k <= rows; k++)
// {
//    star(rows);
//     printf("\n");
// }

//     switch (input)
//     {
//     case (0):
//         for (int i = 0; i <= 4; i++)
//         {
//             printf("* \n");
//         }
//         break;

//     case (1):
//         for (int i = 4; i <= 0; i--)
//         {
//             printf("* \n");
//         }

//     default:
//         printf("Enter valid input \n");
//         break;

// }
return 0;
}