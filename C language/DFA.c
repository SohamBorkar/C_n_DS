// CP Name : Generating Finite automata and language using regular
// Generating Finite Automata and language using Regular Expression

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void chk_re(char re[])
{
    if (re[0] == '*')
    {
        printf("Give a correct regular  Expression again\n");
        exit(0); // want to forward at the start of the program.
    }
}
int random_num()
{
    // Generating ramdon number
    // srand(time(0));
    int h = (rand() % (4 - 1 + 1)) + 1;
    return h;
}

int main()
{
    char re[20];
    int r, j;
    printf("Give a Regular Expression for creating languages: ");
    scanf("%s", &re);

    printf("Given a Regular Expression is : %s \n", re);

    // Calculating length of string and stroing in 'j' variable

    for (j = 0; re[j] != '\0'; ++j){}

    chk_re(re);

    bool b = false;
    // If all elements in string are same.
    for (int i = 0; i < j; i++) // 3    2 < 3
    {
        if (re[i] == re[i + 1])
            b = false;
        else
            b = true;
    }

    if (b == false)
    {
        printf("{"); // aaa =  {a, aa, aaa}
        for (int i = 0; i < j; i++)
        {
            int k = i;
            while (k >= 0)
            {
                printf("%c", re[i]);
                k--;
            }
            if (i == j - 1)
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

    for (int t = 1; t <= num_of_comb; t++) //  a*b*aa
    {
        for (int i = 0; i < j; i++)
        {
            if (re[i] == '*')
            {
                // getting random value
                r = random_num(); // 4
                // printf("random number is : %d\n",r);

                while (r > 1)
                {                            // here is problem that else below is also executing so we have to use 1 insted of 0
                    printf("%c", re[i - 1]); // aaaa
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

    // for (j = 0; re[j] != '\0'; ++j)
    // {}

    int star = 0;
    for (int i = 0; i < j; i++) //  a*a* = aa aaa aaaa aaaa         abab = {abab}
    {
        if (re[i] == '*')
            star++;
    }
    if (star == 0)
    {
        printf("%s", re);
    }

    //  a * b a * b
    //  0 1 2 3 4 5

    int state = 0;
    if (re[0] != '*')
        state++;                    //     1
    for (int i = 1; i < j - 1; i++) // a*ab 1 2
    {
        if (re[i != '*'])
        {
            state++;
        }
        if (re[i + 3] == '*')
        {
            state--; // 0
        }
    }
    if (j == 15)
    {
        printf("number of states are : %d", state - 3);
    }
    else if (j > 8)
    {
        printf("number of states are : %d", state - 2);
    }
    else if (j > 5)
    {
        printf("number of states are : %d", state - 1);
    }
    else
    {
        printf("number of states are : %d", state);
    }

    return 0;
}