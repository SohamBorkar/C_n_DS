// CP Name : Generating Finite automata and language using regular
// Generating Finite Automata and language using Regular Expression

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int random_num()
{
    // Generating ramdon number
    // srand(time(0));
    int h = (rand() % (4 - 1 + 1)) + 1;
    return h;
}

int main()
{
    char re[50];
    int r;
    // Taking input of Regular Experssion from user
    printf("Enter your Regular Expression: ");
    scanf("%s", &re);

    // Printing Regular Expression taken from user
    printf("Entered Regular Expression is: %s \n", re);

    // Calculating length of string and stroing in 'j' variable
    int j;
    for (j = 0; re[j] != '\0'; ++j)
    {
    }

    if (re[0] == '*' || '!' || '?' || '@' || '#' || '&' || '/' || '<' || '>' || '%')
    {
        printf("Enter correct Expression again\n");
        exit(0); // want to forward at the start of the program.
    }

    // to check if there is only one element in string.
    // else if (j == 1)
    // {
    //     printf("{%c}\n", re[0]);
    //     exit(0);
    // }

    bool b = false;
    // If all elements in string are same.
    for (int i = 0; i < j ; i++)    // 3    2 < 3
    {
        if (re[i] == re[i + 1])
            b = false;
        else
            b = true;
    }

    printf("Booleanv value is %d \n",b);

    if (b == false)
    {
        printf("{");
        for (int i = 0; i < j; i++)
        {
            int k = i;
            while (k >= 0)
            {
                printf("%c", re[i]);
                k--;
            }
            if (i == j-1)
                printf("");

            else
                printf(", ");
        }
        printf("}\n");
        exit(0);
    }

    // printf("Length of string: %d \n",j);

    // 1*01*01*

    printf("Enter number of combinations you want in language: \n");
    int num_of_comb;
    scanf("%d", &num_of_comb);

    printf("{");

    for (int t = 1; t <= num_of_comb; t++)
    {
        for (int i = 0; i < j; i++)
        {
            if (re[i] == '*')
            {
                // getting random value
                r = random_num();
                // printf("random number is : %d\n",r);

                while (r > 1)
                { // here is problem that else below is also executing so we have to use 1 insted of 0
                    printf("%c", re[i - 1]);
                    r--;
                }
            }

            else
            {
                printf("%c", re[i]);
            }
        }
        if (t == num_of_comb)
            printf("");

        else
            printf(", ");
    }
    printf("}");

    return 0;
}

// Generating DFA and Transition table for Regular Expression

// // String Generator using RE
// // Combination of random string generation using re

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int random_num()
// {
//     // Generating ramdon number
//     // srand(time(0));
//     int h = (rand() % (4 - 1 + 1)) + 1;
//     return h;
// }

// int main()
// {
//     char re[10];
//     int r;
//     // Taking input of Regular Experssion from user
//     printf("Enter your Regular Expression: ");
//     scanf("%s", &re);

//     // Printing Regular Expression taken from user
//     printf("Entered Regular Expression is: %s \n", re);

//     // Calculating length of string and stroing in 'j' variable
//     int j;
//     for (j = 0; re[j] != '\0'; ++j)
//     {
//     }

//     // printf("Length of string: %d \n",j);

//     // 1*01*01*

//     printf("Enter number of combinations you want in language: \n");
//     int num_of_comb;
//     scanf("%d", &num_of_comb);
//     if (re[0] == '*')
//     {
//         printf("Enter correct Expression again\n");
//         exit(0); // want to forward at the start of the program.
//     }
//     else if (re[0])
//     {
//         /* code */
//     }

//     printf("{");

//     for (int t = 1; t <= num_of_comb; t++)
//     {
//         for (int i = 0; i < j; i++)
//         {
//             if (re[i] == '*')
//             {
//                 // getting random value
//                 r = random_num();
//                 // printf("random number is : %d\n",r);

//                 while (r > 1)
//                 { // here is problem that else below is also executing so we have to use 1 insted of 0
//                     printf("%c", re[i - 1]);
//                     r--;
//                 }
//             }

//             else
//             {
//                 printf("%c", re[i]);
//             }
//         }
//         if (t == num_of_comb)
//             printf("");

//         else
//             printf(", ");
//     }
//     printf("}");

//     return 0;
// }