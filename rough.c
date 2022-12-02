// #include <stdio.h>
// #include<string.h>
// #include<stdlib.h>
// #include<time.h>

// int GenerateRandomNumber(int n)
// {
//     srand(time(NULL));
//     return rand()%n+1;
// };

// int main()
// {
//     printf("The Random Between 1 to 3 is : %d\n", GenerateRandomNumber(3));
//     return 0;
// }



#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int randomNum(int n)
{
    srand(time(NULL));
    return rand() % n;
};

// 1 > 3 > 2 > 1

int main()
{

    int ui, ci;

    printf("**************\n");
    printf("\t\t\tSimple Stone-Paper-Siccsor\n");
    printf("**************\n");

    printf("Enter  \n 1 For Stone\n 2 For Paper \n 3 For Sissor:\n");

    printf("Your Choise: ");
    scanf("%d", &ui);
    ci = randomNum(3);
    // ci++;
    printf("Computer's choise: %d\n",ci);


        if (ui == 1 && ci == 2)
        {
            printf("Congrats!!  You Won!!");
        }
        else if (ui == 1 && ci == 3)
        {
            printf("Oh!! You Loose!!");
        }
        else if (ui == 2 && ci == 1)
        {
            printf("Congrats!!  You Won!!");
        }
        else if (ui == 2 && ci == 3)
        {
            printf("Oh!! You Loose!!");
        }
        else if (ui == 3 && ci == 1)
        {
            printf("Oh!! You Loose!!");
        }
        else if (ui == 3 && ci == 2)
        {
            printf("Congrats!!  You Won!!");
        }
        else if (ui == ci)
        {
            printf("Draw!!");
        }
        else
        {
            printf("You must enter number between 1 to 3");
        }
    

    return 0;
}