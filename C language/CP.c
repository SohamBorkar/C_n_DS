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
    // Generating ramdon number
    // srand(time(0));
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
        exit(0); // want to forward at the start of the program.
    }
};

void no_star_re(char re[], int j)
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

void swap(char *a, char *b)
{
    char temp[30];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
};

void print_language(char re[], int j) // number of elements
{
    // j = len of re
    printf("Enter number of combinations you want in language: \n");
    int num_of_comb;
    scanf("%d", &num_of_comb);

    char lang[20]; // each element created get stored in lang string array

    for (int t = 1; t <= num_of_comb; t++) //  run times of combination
    {
        for (int i = 0; i < j; i++)
        {
            if (re[i] == '*')
            {
                int r = 0;
                // getting random value
                r = random_num(); // 4
                                  // printf("random number is : %d\n",r);

                int s = 0;
                while (r > 1)
                {

                    char c = re[i - 1];
                    str_append(lang[s], c);
                    // printf("%c", re[i - 1]);
                    r--;
                    s++;
                }
                printf("%s\n", lang[i]);
            }

            else
            {
                char c = re[i];
                str_append(lang[i], c);
                // printf("%c", re[i]);
                // printf("%s \n", lang[i]);
            }
        }

        char str[num_of_comb][20];

        for (int l = 0; l < num_of_comb; l++)
        {
            for (int m = 0; m < num_of_comb - l - 1; m++)
            {
                if (strlen(lang[m]) > strlen(str[m + 1]))
                {
                    swap(lang[m], str[m + 1]);
                }
            }
        }
    }

    // printing of languages done
    printf("{\n");
        for (int t = 0; t < num_of_comb; t++)
        {
            printf("%s", lang[t]);
            if (t == num_of_comb)
                printf("");

            else
                printf(", ");
        }
        printf("} \n\n");
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
};

int main()
{
    char re[20];
    int r, j;
    printf("Give a Regular Expression for creating languages: ");
    scanf("%s", &re);

    printf("Given a Regular Expression is : %s \n", re);

    // Calculating length of string and stroing in 'j' variable

    for (j = 0; re[j] != '\0'; ++j)
    {
    }

    chk_re(re);
    no_star_re(re, j);
    
    is_all_same_element(re, j);

    print_language(re, j);

    print_states(re, j);

    return 0;
}