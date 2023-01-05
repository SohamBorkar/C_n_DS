#include <stdio.h>
#include <stdlib.h>

int main()
{
    char re[50];
    printf("Enter your Regular Expression: ");
    scanf("%s", &re);

    int j;
    for (j = 0; re[j] != '\0'; ++j)
    {
    }

    int count = 0;
    for (int i = 0; i < j; i++)
    {
        if (re[i] == '*')
            count++;
    }

    if (count == 0)
    {
        printf("%d \n", j);
        exit(0);
    }

    if (count == 1)
    {
        printf("%d \n", j - count);
        exit(0);
    }

    int temp1 = (j / count) + 2;
    int temp2 = (j / count) + 1;

    if (re[0] == re[j - 1])
        printf("%d\n", temp1);
    else
        printf("%d\n", temp2);

    return 0;
}