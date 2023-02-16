// CP Name : Generating Finite automata and language using regular
// Generating Finite Automata and language using Regular Expression

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>

int random_num()
{
    int h = (rand() % (4 - 1 + 1)) + 1;
    return h;
};

void is_all_same_element(char re[], int j)
{
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
};

void chk_re(char re[])
{
    if (re[0] == '*')
    {
        printf("Give a correct regular  Expression again\n");
        exit(0); 
    }
};

void star_re(char re[], int j)
{
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
};

void print_language(char re[], int j)
{
    printf("Enter number of combinations you want in language: \n");
    int num_of_comb;
    scanf("%d", &num_of_comb);

    printf("{");

    for (int t = 1; t <= num_of_comb; t++) //  a*b*aa = 
    {
        for (int i = 0; i < j; i++)
        {
            if (re[i] == '*')
            {
                int r = 0;
                // getting random value
                r = random_num(); // 4
               

                while (r > 1)
                {                            
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
};

void print_states(char re[], int j)
{
    int state = 0;
    if (re[0] != '*')
        state++;
    for (int i = 1; i < j - 1; i++)
    {
        if (re[i != '*'])
        {
            state++;
        }
        if (re[i + 3] == '*')
        {
            state--;
        }
    }
    
    if (j > 8)
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
};

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
    star_re(re, j);
    is_all_same_element(re, j);

    print_language(re, j);

    print_states(re, j);

    return 0;
}