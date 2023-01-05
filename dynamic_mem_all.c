#include <stdio.h>
#include <stdlib.h> // to take use of calloc, malloc, realloc and free, we have to include stdlib.h header file

int main()
{
    //" Dynamic Memory allocation "  include malloc and the calloc with the realloc 
    
    // Use of "malloc"
    int* ptr;
    int n;
    printf("Enter the size of the array that you want to creat\n");
    scanf("%d",&n);
    ptr = (int*) malloc(n*sizeof(int));
    for (size_t i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }

    for (size_t i = 0; i < n; i++)
    // If we change Value here then it shows garbage value .
    {
        printf("The value at %d of this array is %d\n",i,ptr[i]);
    }

    // int input; 
    //   switch (input)
    // {
    // case 1:
    //     goto end;
    //     break;
    
    // default:
    //     break;
    // }

    // Use of "calloc"
//     int *ptr;
//     int n;
//     printf("Enter the size of the array that you want to creat\n");
//     scanf("%d", &n);
//     ptr = (int *)calloc(4, sizeof(int));

//     for (size_t i = 0; i < n; i++)
//     // If we make this for loop as comment then it shows garbage value as "0". In 'malloc'it shows the garbage value and in calloc it shows garbage value as '0'
//     {
//         printf("Enter the value no %d of this array\n", i);
//         scanf("%d", &ptr[i]);
//     }

//     for (size_t i = 0; i < n; i++)
//     {
//         printf("The value at %d of this array is %d\n", i, ptr[i]);
//     }

//     // Use of "realloc"
//     while (1)
//     {

//         // I do't know how to use facility like given below
//         //  printf("To Quit the program enter '1' \n");
//         // scanf("%d",&input);

//         printf("Enter the size of the new array that you want to creat\n");
//         scanf("%d", &n);
//         ptr = (int *)realloc(ptr, n * sizeof(int));

//         for (size_t i = 0; i < n; i++)
//         // If we make this for loop as comment then it shows garbage value as "0". In 'malloc'it shows the garbage value and in calloc it shows garbage value as '0'
//         {
//             printf("Enter the new value no %d of this array\n", i);
//             scanf("%d", &ptr[i]);
//         }

//         for (size_t i = 0; i < n; i++)
//         {
//             printf("The new value at %d of this array is %d\n", i, ptr[i]);
//         }
//     }
//     free(ptr);
// // end:

    return 0;
}