#include <stdio.h>
// #include <stdlib.h>
int main()
{
    // NOTE : TO do all the programs below You have to see the myfile.txt after running the program.

    
    FILE *ptr = NULL;
    char string[64] = "This content was produced by Tutorial64.c";

    // ****** Reading a file ******
    ptr = fopen("myfile.txt", "r");
    fscanf(ptr, "%s", string);
    printf("The content of this file has: %s\n",string );

    // ****** Writing a file  In Write Mode ******
    // ptr = fopen("myfile.txt", "w");
    // fprintf(ptr, "%s", string);

    // ****** Writing a file In Append Mode ******
    // ptr = fopen("myfile.txt", "a");
    // fprintf(ptr, "%s", string);

    fclose(ptr);

    return 0;
}