#include <stdio.h>
int main()
{
    char str [5] = {'s', 'o', 'h', 'a', 'm'};
    char lang[20];

    for (int i = 0; i < 5; i++)
    {
        char c = str[i];
        str_append(lang[i], c);
    }
    for (int i = 0; i < 5; i++)
    {
        printf(lang[i]);
    }
    

    return 0;
}