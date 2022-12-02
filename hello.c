#include <stdio.h>
int main()
{
    // int exam;
    // printf("Which Subject you have clear\n", exam);
    // printf("You have clear maths then press 1\n", exam);
    // printf("You have clear science then press 2\n", exam);
    // printf("You have clear both subjects then press 3\n", exam);
    // scanf("%d", &exam);

    // if (exam == 1)
    // {
    //     printf("you won 15 rupee");
    // }

    // else if (exam == 2)
    // {
    //     printf("you won 15 rupee");
    // }

    // else if (exam == 3)
    // {
    //     printf("you won 45 rupee");
    // }



    
    int i;
    printf("Enter the  integer of the subject in which you passed \n For Science enter integer '4' \n For Math enter integer '3' \n For English enter the integer '2' \n For science and math enter integer '5' \n For science and english enter integer '1'\n For math and english enter integer '6'\n ");
    scanf("%c",&i);

    if (i==4)
    {
        printf("You got 10 points");
    }

    else if (i==3)
    {
        printf("You got 20 points");
    }
    
    else if (i==2)
    {
        printf("You got 25 points");
    }
    
    else if (i==1)
    {
        printf("You got 60 points");
    }
    
    else if (i==5)
    {
        printf("You got 55 points");
    }
    
    else
    {
        printf("You got 88 points");
    }
    
    // else if (c==6)
    // {
    //     printf("You got 77 points");
    // }
    
    // else
    // {
    //     printf("You got 88 points");
    // }
    // yacha eartha aahe ki kahich nahi
    
    return 0;
}



