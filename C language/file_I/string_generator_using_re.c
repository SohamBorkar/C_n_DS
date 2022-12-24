// String Generator using RE

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_num(){
    // Generating ramdon number
    srand(time(0));
    int r = (rand() % (5 - 1 + 1)) + 1;
    // printf("Random number: %d \n", r);  
    return r;
}

int main()
{
    char re[10];
    int r;
    // Taking input of Regular Experssion from user
    printf("Enter your Regular Expression: ");
    scanf("%s",&re);

    // Printing Regular Expression taken from user
    printf("Entered Regular Expression is: %s \n",re);

    // Calculating length of string and stroing in 'j' variable
    int j;
    for(j = 0; re[j] != '\0'; ++j){}

    // printf("Length of string: %d \n",j);

    // 1*01*01*

    for (int i = 0; i < j; i++)
    {
        if (re[0] == '*')
        {
            printf("Enter correct Expression again\n");
            exit(0);        // want to forward at the start of the program.
        }
        
        else if (re[i] == '*')
        {
            // getting random value    
            r = random_num();
            // printf("random number is : %d\n",r);

            while(r > 1){           // here is problem that else below is also executing so we have to use 1 insted of 0
                printf("%c",re[i-1]);
                r--;
            }
        }
        
        else
        {
            printf("%c",re[i]);
        }
    }
            //problem to solve is: random number is not generating each time we call the function.
    int e = random_num();
    printf("%d \n", e);
    e = random_num();
    printf("%d \n", e);
    e = random_num();
    printf("%d \n", e);
    e = random_num();
    printf("%d \n", e);

    int f = random_num();
    printf("%d \n",f);
    f = random_num();
    printf("%d \n");
    f = random_num();
    printf("%d \n");
    f = random_num();
    printf("%d \n");
    f = random_num();
    printf("%d \n");

    
    return 0;
}