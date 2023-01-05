#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int* ptr = malloc(10 * sizeof(int));

    char re[20] = "This";
    printf("size of str is: %d \n", sizeof(re));

    // Calculating length of string and stroing in 'j' variable
    int j;
    for (j = 0; re[j] != '\0'; ++j)
    {}    

    printf("actual size is %d \n",j);

    char new[j];
    strcpy(new, re);
    printf("new string is: %s \n", new);
    printf("size of new is : %d \n", sizeof(new));
    printf("%s \n", new[3]);
    return 0;
}