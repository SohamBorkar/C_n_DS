// CP Name : Generating Finite automata and language using Regular Expression.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

int random_num()
{
    // Generating ramdon Number 
    // srand(time(0));
    int h = (rand() % (4 - 1 + 1)) + 1;
    return h;
}

int main()
{
    char re[50];
    int r,j;
    // Taking input of Regular Experssion from user
    printf("Give a Regular Expression for creating languages: ");
    scanf("%s", &re);

    // Printing Regular Expression taken from user
    printf("Given a Regular Expression is : %s \n", re);

    // Calculating length of string and stroing in 'j' variable

    for (j = 0; re[j] != '\0'; ++j)
    {
    }

    if (re[0] == '*')
    {
        printf("Give a correct regular  Expression again\n");
        exit(0); // want to forward at the start of the program.
    }

    bool b = false;
    // If all elements in string are same.
    for (int i = 0; i < j ; i++)    // 3    2 < 3
    {
        if (re[i] == re[i + 1])
            b = false;
        else
            b = true;
    }

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

    printf("Enter Number of combinations you want in language: ");
    int num_of_comb;
    scanf("%d", &num_of_comb);
    printf(" \n");
    printf("Strings of language generated are:  \n");
    printf("{");

    for (int t = 1; t <= num_of_comb; t++)
    {
        for (int i = 0; i < j; i++)
        {
            if (re[i] == '*')
            {
                // getting random value
                r = random_num();
                // printf("random Number is : %d\n",r);

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
    printf("}\n\n");

    // printf("Your Regular Expression for Checking State : ",re);
    // scanf("%s", &re);
    for (j = 0; re[j] != '\0'; ++j)
    {}   

    int star =0;
    for (int i = 0; i < j; i++)
    {
        if (re[i]=='*')
            star++;
        
    }
    if (star==0)
    {
        printf("%s",re);
    }
    
                  
    //  a * b a * b
    //  0 1 2 3 4 5
 int state=0;
 if(re[0]!='*')
    state++; //     1
    for (int  i = 1; i < j-1; i++)
    {
        

       if (re[i!='*'])
       {
        state++;
       }
       if (re[i+3]=='*')
       {
        state--;
       }
        
    }
    if(j==15) 
    {
    printf("Number of states given Regular Expression consist are : %d",state-3);

    }
    else if(j>8)
    {
    printf("Number of states given Regular Expression consist are : %d",state-2);
    }
     else if(j>5)
    {
    printf("Number of states given Regular Expression consist are : %d",state-1);
    }
    else
    {
    printf("Number of states given Regular Expression consist are : %d",state);

    }

    printf("\n");
    return 0;
}